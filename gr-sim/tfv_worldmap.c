#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "gr-sim.h"
#include "tfv_utils.h"
#include "tfv_zp.h"

#include "tfv_sprites.h"
#include "tfv_backgrounds.h"

/* In Town */


/* Puzzle Room */
/* Get through office */
/* Have to run away?  What happens if die?  No save game?  Code? */

/* Construct the LED circuit */
/* Zaps through cloud */
/* Susie joins your party */

/* Final Battle */
/* Play music, lightning effects? */
/* TFV only hit for one damage, susie for 100 */




/*
	Map

	0         1          2        3

0     BEACH     ARCTIC   ARCTIC        BELAIR
                TREE    MOUNATIN

1     BEACH     LANDING   GRASS      FOREST
      PINETREE            MOUNTAIN

2     BEACH     GRASS     GRASS       FOREST
      PALMTREE            MOUNTAIN

3     BEACH     DESERT    COLLEGE      BEACH
                CACTUS   PARK
*/

/* Walk through bushes, beach water */
/* Make landing a sprite?  Stand behind things? */

/* Load background to 0xc00 */
static int load_map_bg(void) {

	int i,temp;
	int start,end;

	ground_color=(COLOR_LIGHTGREEN|(COLOR_LIGHTGREEN<<4));

	if (map_x==3) {
		grsim_unrle(harfco_rle,0xc00);
		return 0;
	}

	if (map_x==5) {
		grsim_unrle(landing_rle,0xc00);
		return 0;
	}

	if (map_x==14) {
		grsim_unrle(collegep_rle,0xc00);
		return 0;
	}


	/* Sky */
	color_equals(COLOR_MEDIUMBLUE);
	for(i=0;i<10;i+=2) {
		hlin_double(PAGE2,0,39,i);
	}

	if (map_x<4) ground_color=(COLOR_WHITE|(COLOR_WHITE<<4));
	else if (map_x==13) ground_color=(COLOR_ORANGE|(COLOR_ORANGE<<4));
	else ground_color=(COLOR_LIGHTGREEN|(COLOR_LIGHTGREEN<<4));

	/* grassland/sloped left beach */
	if ((map_x&3)==0) {
		for(i=10;i<40;i+=2) {
			temp=4+(39-i)/8;
			color_equals(COLOR_DARKBLUE);
			hlin_double(PAGE2,0,temp,i);
			color_equals(COLOR_LIGHTBLUE);
			hlin_double_continue(2);
			color_equals(COLOR_YELLOW);
			hlin_double_continue(2);
			color_equals(ground_color);
			hlin_double_continue(35-temp);
		}
	}

	/* Grassland */
	if ((map_x&3)==1) {
		for(i=10;i<40;i+=2) {
			color_equals(ground_color);
			hlin_double(PAGE2,0,39,i);
		}
	}

	/* Mountain */
	if ((map_x&3)==2) {
		for(i=10;i<40;i+=2) {
			color_equals(ground_color);
			hlin_double(PAGE2,0,39,i);
		}
	}

	/* Right Beach */
	if ((map_x&3)==3) {
		for(i=10;i<40;i+=2) {
			temp=24+(i/4);	/* 26 ... 33 */
			color_equals(ground_color);
			hlin_double(PAGE2,0,temp,i);
			color_equals(COLOR_YELLOW);
			hlin_double_continue(2);	/* 28 ... 35 */
			color_equals(COLOR_LIGHTBLUE);
			hlin_double_continue(2);	/* 30 ... 37 */
			color_equals(COLOR_DARKBLUE);
			hlin_double_continue(35-temp);
		}

	}

	/* Draw north shore */
	if (map_x<4) {
		color_equals(COLOR_DARKBLUE);
		hlin_double(PAGE2,0,39,10);
	}

	/* Draw south shore */
	if (map_x>=12) {
		start=0; end=39;
		color_equals(COLOR_DARKBLUE);
		hlin_double(PAGE2,0,39,38);
		color_equals(COLOR_LIGHTBLUE);
		if (map_x==12) start=6;
		if (map_x==15) end=35;
		hlin_double(PAGE2,start,end,36);
		if (map_x==12) start=8;
		if (map_x==15) end=32;
		color_equals(COLOR_YELLOW);
		hlin_double(PAGE2,start,end,34);
	}

	/* Mountains */
	if ((map_x&3)==2) {
		for(i=0;i<4;i++) {
			grsim_put_sprite_page(PAGE2,mountain,10+(i%2)*5,(i*8)+2);
		}
	}

	return 0;
}

int world_map(void) {

	int ch;
	int direction=1;
	int i,limit;
	int newx=0,newy=0,moved;

	/************************************************/
	/* Landed					*/
	/************************************************/

	// TODO:
	//  4x4 grid of island?
	//  proceduraly generated?
	//  can only walk if feet on green/yellow
	//  should features be sprites?

	// rotate when attacked

	gr();

	color_equals(COLOR_BLACK);

	direction=1;
	int odd=0;
	int refresh=1;
	int on_bird=1;

	while(1) {
		moved=0;
		newx=tfv_x;
		newy=tfv_y;

		ch=grsim_input();

		if ((ch=='q') || (ch==27))  break;

		if ((ch=='w') || (ch==APPLE_UP)) {
			newy=tfv_y-2;
			moved=1;
		}
		if ((ch=='s') || (ch==APPLE_DOWN)) {
			newy=tfv_y+2;
			moved=1;
		}
		if ((ch=='a') || (ch==APPLE_LEFT)) {
			if (direction>0) {
				direction=-1;
				odd=0;
			}
			else {
				newx=tfv_x-1;
				moved=1;
			}
		}
		if ((ch=='d') || (ch==APPLE_RIGHT)) {
			if (direction<0) {
				direction=1;
				odd=0;
			}
			else {
				newx=tfv_x+1;
				moved=1;
			}
		}

		if (ch==13) {
			city_map();
			refresh=1;
		}

		if (ch=='h') print_help();
		if (ch=='b') {
			do_battle();
			refresh=1;
		}
		if (ch=='i') print_info();
		if (ch=='m') {
			show_map();
			refresh=1;
		}


		/* Collision detection + Movement */
		if (moved) {
			odd=!odd;
			steps++;

//			if (collision(newx,newy+10,ground_color)) {
//			}
//			else {
				tfv_x=newx;
				tfv_y=newy;
//			}

			if (tfv_x>36) {
				map_x++;
				tfv_x=0;
				refresh=1;
			}
			else if (tfv_x<=0) {
				map_x--;
				tfv_x=35;
				refresh=1;
			}

			if ((tfv_y<4) && (map_x>=4)) {
				map_x-=4;
				tfv_y=28;
				refresh=1;
			}
			else if (tfv_y>=28) {
				map_x+=4;
				tfv_y=4;
				refresh=1;
			}
		}

		if (refresh) {
			int s;
			s=ram[DRAW_PAGE];
			ram[DRAW_PAGE]=PAGE2;
			clear_bottom();
			ram[DRAW_PAGE]=s;
			load_map_bg();
			refresh=0;
		}

		gr_copy_to_current(0xc00);

		/* Draw Background Ground Scatter */

		if (map_x==1) if (tfv_y>=22) grsim_put_sprite(snowy_tree,10,22);
		if (map_x==4) if (tfv_y>=15) grsim_put_sprite(pine_tree,25,16);
		if (map_x==8) if (tfv_y>=22) grsim_put_sprite(palm_tree,10,20);
		if (map_x==12) if (tfv_y>=22) grsim_put_sprite(palm_tree,20,20);
		if (map_x==13) if (tfv_y>=15) grsim_put_sprite(cactus,25,16);


		/* Draw Background Trees */
		if ((map_x==7) || (map_x==11)) {
			for(i=10;i<tfv_y+8;i+=2) {
				limit=22+(i/4);
				color_equals(COLOR_DARKGREEN);
				hlin_double(ram[DRAW_PAGE],0,limit,i);
			}
		}

		if (on_bird) {
			if (direction==-1) {
				if (odd) grsim_put_sprite(bird_rider_walk_left,tfv_x,tfv_y);
				else grsim_put_sprite(bird_rider_stand_left,tfv_x,tfv_y);
			}
			if (direction==1) {
				if (odd) grsim_put_sprite(bird_rider_walk_right,tfv_x,tfv_y);
				else grsim_put_sprite(bird_rider_stand_right,tfv_x,tfv_y);
			}
		}
		else {
			if (direction==-1) {
				if (odd) grsim_put_sprite(tfv_walk_left,tfv_x,tfv_y);
				else grsim_put_sprite(tfv_stand_left,tfv_x,tfv_y);
			}
			if (direction==1) {
				if (odd) grsim_put_sprite(tfv_walk_right,tfv_x,tfv_y);
				else grsim_put_sprite(tfv_stand_right,tfv_x,tfv_y);
			}
		}

		/* Draw Below Ground Scatter */
		if (map_x==1) if (tfv_y<22) grsim_put_sprite(snowy_tree,10,22);
		if (map_x==4) if (tfv_y<15) grsim_put_sprite(pine_tree,25,16);
		if (map_x==8) if (tfv_y<22) grsim_put_sprite(palm_tree,10,20);
		if (map_x==12) if (tfv_y<22) grsim_put_sprite(palm_tree,20,20);
		if (map_x==13) if (tfv_y<15) grsim_put_sprite(cactus,25,16);

		if ((map_x==7) || (map_x==11)) {

			/* Draw Below Forest */
			for(i=tfv_y+8;i<36;i+=2) {
				limit=22+(i/4);
				color_equals(COLOR_DARKGREEN);
				hlin_double(ram[DRAW_PAGE],0,limit,i);
			}

			int f;
			/* Draw tree trunks */
			for(f=36;f<40;f+=2) {

				color_equals(COLOR_BROWN);
				hlin_double(ram[DRAW_PAGE],0,0,f);

				for(i=0;i<13;i++) {
					color_equals(COLOR_GREY);
					hlin_double_continue(1);
					color_equals(COLOR_BROWN);
					hlin_double_continue(1);
				}

			}

		}

		if (map_x==3) {
			if ((steps&0xf)==0) {
				grsim_put_sprite(lightning,25,4);
				/* Hurt hit points if in range? */
				if ((tfv_x>25) && (tfv_x<30) && (tfv_y<12)) {
					printf("HIT! %d %d\n\n",steps,hp);
					if (hp>11) {
						hp=10;
					}
				}
			}
		}

		page_flip();

		if (steps>=60) {
			steps=0;
			time_minutes++;
			if (time_minutes>=60) {
				time_hours++;
				time_minutes=0;
			}
		}

		usleep(10000);
	}

	return 0;
}
