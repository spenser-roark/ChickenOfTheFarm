const unsigned char Level1Palette[13]={
BLACK,
DARK_GRAY,
GRAY,
WHITE,
DARK_BLUE,
BLUE,
LIGHT_BLUE,
DARK_PURPLE,
PURPLE,
LIGHT_PURPLE,
DARK_GREEN,
GREEN,
LIGHT_GREEN,
};

#define LEVEL1_ENEMY_COUNT 8
static const unsigned char Sprites_Level1[LEVEL1_ENEMY_COUNT * 5] = {
//   id, startX, startY, startNametable, direction,
   0x02,   0x08,   0x97,           0x00,      0x00,
   0x02,   0xF0,   0xE7,           0x00,      0x40,
   0x03,   0x20,   0x31,           0x02,      0x01,
   0x02,   0xF0,   0x97,           0x02,      0x40,
   0x01,   0x50,   0x50,           0x02,      0x00,
   0x02,   0x08,   0x9F,           0x02,      0x00,
   0x04,   0xE0,   0x0F,           0x00,      0x00,
   0x05,   0xC0,   0x13,           0x00,      0x01,
};
