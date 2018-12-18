const unsigned char ClimbOverPalette[13]={
BLACK,
VERY_LIGHT_GRAY_BLUE,
WHITE,
LIGHT_GRAY_BLUE,
VERY_LIGHT_GRAY_BLUE,
VERY_LIGHT_GRAY_BLUE,
WHITE,
VERY_LIGHT_GRAY_BLUE,
LIGHT_BLUE,
LIGHT_GRAY_BLUE,
VERY_LIGHT_GRAY_BLUE,
LIGHT_BLUE,
WHITE,
};

#define CLIMBOVER_ENEMY_COUNT 9
static const unsigned char Sprites_ClimbOver[CLIMBOVER_ENEMY_COUNT * 5] = {
//   id, startX, startY, startNametable, direction,
   0x02,   0x88,   0xC3,           0x02,      0x00,
   0x02,   0x70,   0xF3,           0x00,      0x40,
   0x02,   0x70,   0xE3,           0x00,      0x40,
   0x04,   0x10,   0xBF,           0x02,      0x00,
   0x05,   0xA0,   0xBC,           0x02,      0x01,
   0x05,   0xD8,   0xBC,           0x02,      0x01,
   0x03,   0x70,   0x30,           0x00,      0x00,
   0x03,   0x80,   0x30,           0x00,      0x00,
   0x03,   0xE0,   0xA0,           0x00,      0x00,
};
