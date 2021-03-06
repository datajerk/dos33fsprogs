/* TFV Sprites */
unsigned char tfv_stand_right[]={
	0x4,0x6,
	0x00,0xDD,0xBD,0x00,
	0x00,0xDD,0xDB,0x0B,
	0x00,0x22,0x00,0x00,
	0x00,0x22,0x02,0x0B,
	0x00,0x22,0x00,0x00,
	0x00,0x82,0x80,0x00,
};

unsigned char tfv_walk_right[]={
	0x4,0x6,
	0x00,0xDD,0xBD,0x00,
	0x00,0xDD,0xDB,0x0B,
	0x00,0x22,0x00,0x00,
	0x00,0x22,0x02,0xB0,
	0x22,0x02,0x20,0x00,
	0x82,0x00,0x82,0x00,
};

unsigned char tfv_stand_left[]={
	0x4,0x6,
	0x00,0xBD,0xDD,0x00,
	0x0B,0xDB,0xDD,0x00,
	0x00,0x00,0x22,0x00,
	0x0B,0x02,0x22,0x00,
	0x00,0x00,0x22,0x00,
	0x00,0x80,0x82,0x00,
};

unsigned char tfv_walk_left[]={
	0x4,0x6,
	0x00,0xBD,0xDD,0x00,
	0x0B,0xDB,0xDD,0x00,
	0x00,0x00,0x22,0x00,
	0xB0,0x02,0x22,0x00,
	0x00,0x20,0x02,0x22,
	0x00,0x82,0x00,0x82,
};

unsigned char tfv_led_sword[]={
	0x5,0x3,
	0x10,0x00,0x10,0x00,0x00,
	0x10,0x01,0x10,0x10,0x10,
	0x00,0x00,0x11,0x01,0x10,
};


/* Bird Sprites */
unsigned char bird_stand_right[] = {
	0x6,0x7,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0xdd,0x90,
	0x00,0x00,0x00,0x00,0xdd,0x00,
	0x0d,0xdd,0xdd,0xdd,0xdd,0x00,
	0x00,0x00,0x0d,0xdd,0x0d,0x00,
	0x00,0x00,0x00,0x99,0x00,0x00,
	0x00,0x00,0x00,0x99,0x90,0x00,
};

unsigned char bird_stand_left[] = {
	0x6,0x7,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x90,0xdd,0x00,0x00,0x00,0x00,
	0x00,0xdd,0x00,0x00,0x00,0x00,
	0x00,0xdd,0xdd,0xdd,0xdd,0x0d,
	0x00,0x0d,0xdd,0x0d,0x00,0x00,
	0x00,0x00,0x99,0x00,0x00,0x00,
	0x00,0x90,0x99,0x00,0x00,0x00,
};

unsigned char bird_walk_right[] = {
	0x6,0x7,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0xdd,0x90,
	0x00,0x00,0x00,0x00,0xdd,0x00,
	0x0d,0xdd,0xdd,0xdd,0xdd,0x00,
	0x00,0x00,0x0d,0xdd,0x0d,0x00,
	0x00,0x00,0x00,0x99,0x00,0x00,
	0x00,0x00,0x99,0x00,0x99,0x00,
};


unsigned char bird_walk_left[] = {
	0x6,0x7,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x90,0xdd,0x00,0x00,0x00,0x00,
	0x00,0xdd,0x00,0x00,0x00,0x00,
	0x00,0xdd,0xdd,0xdd,0xdd,0x0d,
	0x00,0x0d,0xdd,0x0d,0x00,0x00,
	0x00,0x00,0x99,0x00,0x00,0x00,
	0x00,0x99,0x00,0x99,0x00,0x00,
};

/* with rider */

unsigned char bird_rider_stand_right[] = {
	0x6,0x7,
	0x00,0xdd,0xbd,0x00,0x00,0x00,
	0x00,0xdd,0xdb,0x00,0xdd,0x90,
	0x00,0x00,0x22,0x02,0xdd,0x00,
	0x0d,0xdd,0xd2,0x22,0xdd,0x00,
	0x00,0x00,0x0d,0x82,0x8d,0x00,
	0x00,0x00,0x00,0x99,0x00,0x00,
	0x00,0x00,0x00,0x99,0x90,0x00,
};

unsigned char bird_rider_walk_right[] = {
	0x6,0x7,
	0x00,0xdd,0xbd,0x00,0x00,0x00,
	0x00,0xdd,0xdb,0x00,0xdd,0x90,
	0x00,0x00,0x22,0x02,0xdd,0x00,
	0x0d,0xdd,0xd2,0x22,0xdd,0x00,
	0x00,0x00,0x0d,0x82,0x8d,0x00,
	0x00,0x00,0x00,0x99,0x00,0x00,
	0x00,0x00,0x99,0x00,0x99,0x00,
};

unsigned char bird_rider_stand_left[] = {
	0x6,0x7,
	0x00,0x00,0x00,0xbd,0xdd,0x00,
	0x90,0xdd,0x00,0xdb,0xdd,0x00,
	0x00,0xdd,0x02,0x22,0x00,0x00,
	0x00,0xdd,0x22,0xd2,0xdd,0x0d,
	0x00,0x8d,0x82,0x0d,0x00,0x00,
	0x00,0x00,0x99,0x00,0x00,0x00,
	0x00,0x90,0x99,0x00,0x00,0x00,
};

unsigned char bird_rider_walk_left[] = {
	0x6,0x7,
	0x00,0x00,0x00,0xbd,0xdd,0x00,
	0x90,0xdd,0x00,0xdb,0xdd,0x00,
	0x00,0xdd,0x02,0x22,0x00,0x00,
	0x00,0xdd,0x22,0xd2,0xdd,0x0d,
	0x00,0x8d,0x82,0x0d,0x00,0x00,
	0x00,0x00,0x99,0x00,0x00,0x00,
	0x00,0x99,0x00,0x99,0x00,0x00,
};





/* Ship Sprites */


#if 0
unsigned char test_sprite[]={
	0x8,0x4,
	0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,
	0x55,0x55,0x55,0x00,0x00,0x00,0x00,0x00,
	0xff,0x1f,0x4f,0x2f,0xff,0x22,0x20,0x00,
	0x5f,0x5f,0x5f,0x5f,0xff,0xf2,0xf2,0xf2,
};



#endif


unsigned char splash_forward[]={
	0x7,0x2,
	0x00,0xee,0x00,0x00,0x00,0xee,0x00,
	0xee,0x00,0x00,0x00,0x00,0x00,0xee,
};

unsigned char splash_right[]={
	0x7,0x2,
	0x00,0x00,0x00,0x00,0x00,0xee,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0xee,
};

unsigned char splash_left[]={
	0x7,0x2,
	0x00,0xee,0x00,0x00,0x00,0x00,0x00,
	0xee,0x00,0x00,0x00,0x00,0x00,0x00,
};

unsigned char shadow_forward[]={
	0x3,0x2,
	0x00,0xaa,0x00,
	0xa0,0xaa,0xa0,
};

unsigned char shadow_right[]={
	0x3,0x2,
	0xa0,0x00,0xaa,
	0x00,0x0a,0xa0,
};

unsigned char shadow_left[]={
	0x3,0x2,
	0xaa,0x00,0xa0,
	0xa0,0x0a,0x00,
};

unsigned char ship_forward[]={
	0x9,0x5,
	0x00,0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x66,0xff,0x66,0x00,0x00,0x00,
	0x00,0x00,0x70,0x2f,0x12,0x2f,0x70,0x00,0x00,
	0xf0,0xf7,0xf7,0xf2,0xd9,0xf2,0xf7,0xf7,0xf0,
	0x00,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x00,
};

unsigned char ship_right[]={
	0x9,0x5,
	0x00,0x00,0x00,0x00,0x00,0x60,0x60,0xf0,0x00,
	0x00,0xf0,0x70,0x70,0xf6,0xf6,0x6f,0x66,0x00,
	0x00,0x07,0xff,0x2f,0x12,0x27,0xf6,0x00,0x00,
	0x00,0x00,0x00,0xdd,0xd9,0xf2,0x77,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x0f,0xff,0x70,0x00,

};

unsigned char ship_left[]={
	0x9,0x5,
	0x00,0xf0,0x60,0x60,0x00,0x00,0x00,0x00,0x00,
	0x00,0x66,0x6f,0xf6,0xf6,0x70,0x70,0xf0,0x00,
	0x00,0x00,0xf6,0x27,0x12,0x2f,0xff,0x07,0x00,
	0x00,0x00,0x77,0xf2,0xd9,0xdd,0x00,0x00,0x00,
	0x00,0x70,0xff,0x0f,0x00,0x00,0x00,0x00,0x00,
};


/* Enemies */
unsigned char killer_crab[]={
	0x9,0x6,
	0x99,0x00,0x99,0x00,0x00,0x00,0x99,0x00,0x99,
	0x06,0x60,0x06,0x00,0x00,0x00,0x06,0x60,0x06,
	0x00,0x06,0x40,0x49,0x44,0x49,0x40,0x06,0x00,
	0x06,0x04,0x44,0x44,0x44,0x44,0x44,0x04,0x06,
	0x00,0x60,0x04,0x64,0x04,0x64,0x04,0x60,0x00,
	0x44,0x00,0x40,0x04,0x00,0x04,0x40,0x00,0x44,
};

/* Procrastinon */

/***********************/
/* Background Features */
/***********************/


/* Palm Tree */
unsigned char palm_tree[]={
	0x08,0x07,
	0x00,0x00,0x00,0x00,0x00,0x40,0x04,0x40,
	0x00,0x40,0x04,0x44,0x84,0x40,0x00,0x00,
	0x04,0x00,0x40,0x05,0x88,0x00,0x04,0x40,
	0x00,0x44,0x00,0x00,0x08,0x80,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x88,0x00,0x00,
	0x00,0x00,0x00,0x00,0x80,0x08,0x00,0x00,
	0x00,0x00,0x00,0x00,0x88,0x00,0x00,0x00,
};

/* Pine Tree */
unsigned char pine_tree[]={
	0x07,0x06,
	0x00,0x00,0x00,0x44,0x00,0x00,0x00,
	0x00,0x00,0x00,0x44,0x00,0x00,0x00,
	0x00,0x00,0x44,0x44,0x44,0x00,0x00,
	0x00,0x04,0x44,0x44,0x44,0x04,0x00,
	0x04,0x04,0x04,0x84,0x04,0x04,0x04,
	0x00,0x00,0x00,0x88,0x00,0x00,0x00,
};

/* Snowy Tree */
unsigned char snowy_tree[]={
	0x07,0x06,
	0x00,0x00,0x00,0x77,0x00,0x00,0x00,
	0x00,0x00,0x00,0x77,0x00,0x00,0x00,
	0x00,0x00,0x77,0x44,0x44,0x00,0x00,
	0x00,0x07,0x44,0x44,0x44,0x04,0x00,
	0x07,0x04,0x04,0x84,0x04,0x04,0x04,
	0x00,0x00,0x00,0x88,0x00,0x00,0x00,
};

/* Cactus */
unsigned char cactus[]={
	0x05,0x06,
	0x00,0x00,0x44,0x00,0x00,
	0x44,0x00,0x44,0x00,0x40,
	0x44,0x00,0x44,0x00,0x44,
	0x04,0x04,0x44,0x04,0x04,
	0x00,0x00,0x44,0x00,0x00,
	0x00,0x00,0x44,0x00,0x00,
};


/* Mountain */
unsigned char mountain[]={
	0x0d,0x07,
	0x00,0x00,0x00,0x00,0x00,0x70,0xf7,0x70,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x77,0xff,0xff,0x77,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x90,0x8D,0x88,0x48,0x58,0x85,0x50,0x00,0x00,0x00,
	0x00,0x00,0xD0,0x9D,0x88,0x88,0x88,0x48,0x88,0x55,0x50,0x00,0x00,
	0x00,0xD0,0x89,0x88,0x88,0x89,0x88,0x88,0x88,0x88,0x85,0x75,0x00,
	0xD0,0x89,0x98,0x88,0x98,0x88,0x84,0x88,0x88,0x88,0x85,0x88,0x55,
	0x00,0x00,0x08,0x08,0x08,0x08,0x08,0x88,0x88,0x88,0x08,0x00,0x00,
};

/* Lightning, @25,4 */
unsigned char lightning[]={
	0x06,0x05,
	0x00,0x00,0xdd,0x00,0x00,0x00,
	0x00,0x00,0x00,0xdd,0x00,0x00,
	0x00,0x00,0xdd,0x00,0xdd,0x00,
	0x00,0xdd,0x00,0x00,0xdd,0x00,
	0xdd,0x00,0x00,0x0d,0x00,0xdd,
};

