#include "../GrassPalette.h"

#define OPENPIT_ENEMY_COUNT 15
static const unsigned char Sprites_OpenPit[OPENPIT_ENEMY_COUNT * 5] = {
//   id, startX, startY, startNametable, direction,
   0x05,   0x74,   0x1F,           0x00,      0x01,
   0x05,   0x74,   0x7F,           0x00,      0x01,
   0x05,   0x74,   0xDF,           0x00,      0x01,
   0x05,   0x74,   0x4F,           0x02,      0x01,
   0x05,   0x74,   0xAF,           0x02,      0x01,
   0x05,   0x24,   0x4F,           0x00,      0x01,
   0x05,   0x24,   0xAF,           0x00,      0x01,
   0x05,   0x24,   0x1F,           0x02,      0x01,
   0x05,   0x24,   0x7F,           0x02,      0x01,
   0x05,   0xC4,   0x4F,           0x00,      0x01,
   0x05,   0xC4,   0xAF,           0x00,      0x01,
   0x05,   0xC4,   0x1F,           0x02,      0x01,
   0x05,   0xC4,   0x7F,           0x02,      0x01,
   0x04,   0xE8,   0xBF,           0x02,      0x00,
   0x01,   0xD4,   0x0C,           0x00,      0x01,
};
