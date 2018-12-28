#include "../GrassPalette.h"

#define ARROWCLIMB_ENEMY_COUNT 21
static const unsigned char Sprites_ArrowClimb[ARROWCLIMB_ENEMY_COUNT * 5] = {
//   id, startX, startY, startNametable, direction,
   0x02,   0xF0,   0xB7,           0x02,      0x40,
   0x02,   0xF0,   0x87,           0x02,      0x40,
   0x02,   0xF0,   0x57,           0x02,      0x40,
   0x02,   0xF0,   0x27,           0x02,      0x40,
   0x02,   0xF0,   0xE7,           0x00,      0x40,
   0x02,   0xF0,   0xB7,           0x00,      0x40,
   0x02,   0xF0,   0x87,           0x00,      0x40,
   0x02,   0xF0,   0x57,           0x00,      0x40,
   0x02,   0xF0,   0x27,           0x00,      0x40,
   0x02,   0x08,   0xBF,           0x02,      0x00,
   0x02,   0x08,   0x8F,           0x02,      0x00,
   0x02,   0x08,   0x5F,           0x02,      0x00,
   0x02,   0x08,   0x2F,           0x02,      0x00,
   0x02,   0x08,   0xEF,           0x00,      0x00,
   0x02,   0x08,   0xBF,           0x00,      0x00,
   0x02,   0x08,   0x8F,           0x00,      0x00,
   0x02,   0x08,   0x5F,           0x00,      0x00,
   0x02,   0x08,   0x2F,           0x00,      0x00,
   0x01,   0xC0,   0x17,           0x00,      0x01,
   0x05,   0x7C,   0x20,           0x00,      0x01,
   0x04,   0x78,   0xBF,           0x02,      0x00,
};
