CC = gcc
CFLAGS = -Wall -O2 -g
LFLAGS = -lm

SDL_LIBS= `sdl-config --libs`
SDL_INCLUDE= `sdl-config --cflags`

all:	fade fixed_point rainbow sparkle starfield starfield_fixed kaleido \
	tfv mode7_demo text text_demo tfv_multiply rasterbars rasterbars_fixed \
	lz4d_verbose 6502_test krw_decode


#### Library

gr_fast_clear.o:	gr_fast_clear.c gr-sim.h
	$(CC) $(CFLAGS) -c gr_fast_clear.c


####
demo_title.c:	../gr-utils/png2rle ../tfv/demo.png
	../gr-utils/png2rle c ../tfv/demo.png demo_rle > demo_title.c

####

fade:	fade.o 6502_emulate.o gr-sim.o tfv_utils.o gr_fast_clear.o
	$(CC) $(LFLAGS) $(SDL_LIBS) -o fade fade.o 6502_emulate.o gr-sim.o gr_fast_clear.o tfv_utils.o

fade.o:	fade.c demo_title.c
	$(CC) $(CFLAGS) -c fade.c

####

lz4d_verbose:	lz4d_verbose.o 6502_emulate.o
	$(CC) $(LFLAGS) $(SDL_LIBS) -o lz4d_verbose lz4d_verbose.o 6502_emulate.o

lz4d_verbose.o:	lz4d_verbose.c demo_title.c
	$(CC) $(CFLAGS) -c lz4d_verbose.c

####

krw_decode:	krw_decode.o 6502_emulate.o
	$(CC) $(LFLAGS) $(SDL_LIBS) -o krw_decode krw_decode.o 6502_emulate.o

krw_decode.o:	krw_decode.c demo_title.c
	$(CC) $(CFLAGS) -c krw_decode.c

####

fixed_point:	fixed_point.o
	$(CC) $(LFLAGS) -o fixed_point fixed_point.o

fixed_point.o:	fixed_point.c
	$(CC) $(CFLAGS) -c fixed_point.c

####

rainbow:	rainbow.o 6502_emulate.o gr-sim.o
	$(CC) $(LFLAGS) $(SDL_LIBS) -o rainbow rainbow.o 6502_emulate.o gr-sim.o

rainbow.o:	rainbow.c
	$(CC) $(CFLAGS) -c rainbow.c

####

text:	text.o 6502_emulate.o gr-sim.o
	$(CC) $(LFLAGS) $(SDL_LIBS) -o text text.o 6502_emulate.o gr-sim.o

text.o:	text.c
	$(CC) $(CFLAGS) -c text.c

####

text_demo:	text_demo.o 6502_emulate.o gr-sim.o
	$(CC) $(LFLAGS) $(SDL_LIBS) -o text_demo text_demo.o 6502_emulate.o gr-sim.o

text_demo.o:	text_demo.c
	$(CC) $(CFLAGS) -c text_demo.c

####

mode7_demo:	mode7_demo.o 6502_emulate.o gr-sim.o gr_fast_clear.o
	$(CC) $(LFLAGS) $(SDL_LIBS) -o mode7_demo mode7_demo.o \
		6502_emulate.o gr-sim.o gr_fast_clear.o

mode7_demo.o:	mode7_demo.c
	$(CC) $(CFLAGS) -c mode7_demo.c


###

../gr-utils/png2rle:	
	cd .. && cd gr-utils && make

####

tfv_backgrounds.c:	../gr-utils/png2rle \
			../tfv/title.png \
			../tfv/map.png \
			../tfv/landing.png \
			../tfv/harfco.png \
			../tfv/belair.png \
			../tfv/math_office.png \
			../tfv/video_hr.png \
			../tfv/collegep.png \
			../tfv/umcp.png \
			../tfv/dining.png \
			../tfv/metro.png \
			../tfv/talbot.png
	../gr-utils/png2rle c ../tfv/title.png title_rle > tfv_backgrounds.c
	../gr-utils/png2rle c ../tfv/map.png map_rle >> tfv_backgrounds.c
	../gr-utils/png2rle c ../tfv/landing.png landing_rle >> tfv_backgrounds.c
	../gr-utils/png2rle c ../tfv/harfco.png harfco_rle >> tfv_backgrounds.c
	../gr-utils/png2rle c ../tfv/belair.png belair_rle >> tfv_backgrounds.c
	../gr-utils/png2rle c ../tfv/math_office.png math_office_rle >> tfv_backgrounds.c
	../gr-utils/png2rle c ../tfv/video_hr.png video_hr_rle >> tfv_backgrounds.c
	../gr-utils/png2rle c ../tfv/collegep.png collegep_rle >> tfv_backgrounds.c
	../gr-utils/png2rle c ../tfv/umcp.png umcp_rle >> tfv_backgrounds.c
	../gr-utils/png2rle c ../tfv/dining.png dining_rle >> tfv_backgrounds.c
	../gr-utils/png2rle c ../tfv/metro.png metro_rle >> tfv_backgrounds.c
	../gr-utils/png2rle c ../tfv/talbot.png talbot_rle >> tfv_backgrounds.c





####

tfv_backgrounds.o:	tfv_backgrounds.c tfv_backgrounds.h
	$(CC) $(CFLAGS) -c tfv_backgrounds.c

tfv_battle.o:	tfv_battle.c
	$(CC) $(CFLAGS) -c tfv_battle.c

tfv_citymap.o:	tfv_citymap.c
	$(CC) $(CFLAGS) -c tfv_citymap.c

tfv_flying.o:	tfv_flying.c tfv_flying_fixed.c tfv_flying_float.c tfv_flying_6502.c
	$(CC) $(CFLAGS) -c tfv_flying.c

tfv_info.o:	tfv_info.c
	$(CC) $(CFLAGS) -c tfv_info.c

tfv_opener.o:	tfv_opener.c tfv_utils.h
	$(CC) $(CFLAGS) -c tfv_opener.c

tfv_sprites.o:	tfv_sprites.c tfv_sprites.c
	$(CC) $(CFLAGS) -c tfv_sprites.c

tfv_textentry.o:	tfv_textentry.c
	$(CC) $(CFLAGS) -c tfv_textentry.c

tfv_title.o:	tfv_title.c tfv_utils.h tfv_backgrounds.h
	$(CC) $(CFLAGS) -c tfv_title.c

tfv_utils.o:	tfv_utils.c tfv_utils.h
	$(CC) $(CFLAGS) -c tfv_utils.c

tfv_worldmap.o:	tfv_worldmap.c
	$(CC) $(CFLAGS) -c tfv_worldmap.c


tfv_multiply.o:	tfv_multiply.c
	$(CC) $(CFLAGS) -c tfv_multiply.c

tfv_multiply:	tfv_multiply.o
	$(CC) $(LFLAGS) -o tfv_multiply tfv_multiply.o


tfv.o:	tfv.c gr-sim.h tfv_backgrounds.h tfv_sprites.h
	$(CC) $(CFLAGS) -c tfv.c

tfv:	tfv.o tfv_backgrounds.o tfv_battle.o tfv_citymap.o tfv_flying.o \
		tfv_info.o tfv_opener.o tfv_sprites.o tfv_textentry.o \
		tfv_title.o tfv_utils.o tfv_worldmap.o \
		6502_emulate.o gr-sim.o gr_fast_clear.o
	$(CC) $(LFLAGS) $(SDL_LIBS) -o tfv tfv.o \
		tfv_backgrounds.o tfv_battle.o tfv_citymap.o tfv_flying.o \
		tfv_info.o tfv_opener.o tfv_sprites.o tfv_textentry.o \
		tfv_title.o tfv_utils.o tfv_worldmap.o \
		6502_emulate.o gr-sim.o gr_fast_clear.o

###

kaleido:	kaleido.o 6502_emulate.o gr-sim.o
	$(CC) $(LFLAGS) $(SDL_LIBS) -o kaleido kaleido.o 6502_emulate.o gr-sim.o

kaleido.o:	kaleido.c
	$(CC) $(CFLAGS) -c kaleido.c


rasterbars:	rasterbars.o 6502_emulate.o gr-sim.o gr_fast_clear.o
	$(CC) $(LFLAGS) $(SDL_LIBS) -o rasterbars rasterbars.o \
		6502_emulate.o gr-sim.o gr_fast_clear.o

rasterbars.o:	rasterbars.c
	$(CC) $(CFLAGS) -c rasterbars.c

rasterbars_fixed:	rasterbars_fixed.o 6502_emulate.o gr-sim.o gr_fast_clear.o
	$(CC) $(LFLAGS) $(SDL_LIBS) -o rasterbars_fixed rasterbars_fixed.o \
		6502_emulate.o gr-sim.o gr_fast_clear.o

rasterbars_fixed.o:	rasterbars_fixed.c
	$(CC) $(CFLAGS) -c rasterbars_fixed.c

sparkle:	sparkle.o 6502_emulate.o gr-sim.o
	$(CC) $(LFLAGS) $(SDL_LIBS) -o sparkle sparkle.o 6502_emulate.o gr-sim.o

sparkle.o:	sparkle.c
	$(CC) $(CFLAGS) -c sparkle.c


starfield:	starfield.o 6502_emulate.o gr-sim.o
	$(CC) $(LFLAGS) $(SDL_LIBS) -o starfield starfield.o 6502_emulate.o gr-sim.o

starfield.o:	starfield.c
	$(CC) $(CFLAGS) -c starfield.c

starfield_fixed:	starfield_fixed.o 6502_emulate.o gr-sim.o
	$(CC) $(LFLAGS) $(SDL_LIBS) -o starfield_fixed starfield_fixed.o 6502_emulate.o gr-sim.o

starfield_fixed.o:	starfield_fixed.c
	$(CC) $(CFLAGS) -c starfield_fixed.c


gr-sim.o:	gr-sim.c gr-sim.h apple2_font.h
	$(CC) $(CFLAGS) $(SDL_INCLUDE) -c gr-sim.c

6502_emulate.o:	6502_emulate.c 6502_emulate.h
	$(CC) $(CFLAGS) $(SDL_INCLUDE) -c 6502_emulate.c

6502_test:	6502_test.o 6502_emulate.o
	$(CC) $(LFLAGS) -o 6502_test 6502_test.o 6502_emulate.o

6502_test.o:	6502_test.c 6502_emulate.h
	$(CC) $(CFLAGS) -c 6502_test.c


clean:	
	rm -f *~ *.o gr-sim rainbow sparkle starfield starfield_fixed kaleido \
			tfv text mode7_demo fade fixed_point tfv_multiply \
			rasterbars rasterbars_fixed lookup_tables text_demo \
			lz4d_verbose 6502_test krw_decode


