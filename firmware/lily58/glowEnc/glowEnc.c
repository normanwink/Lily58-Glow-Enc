#include "glowEnc.h"

#ifdef SSD1306OLED
void led_set_kb(uint8_t usb_led) {
    // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here
    //led_set_user(usb_led);
}
#endif

#ifdef RGB_MATRIX_ENABLE
#include "rgb_matrix.h"

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  // Left Side
  { 24, 25, 26, 27,     28,     29     },
  { 23, 22, 21, 20,     19,     18     },
  { 12, 13, 14, 15,     16,     17     },
  { 11, 10, 9,  8,      7,      6      },
  { 0 , 1,  2,  3,      4,      5      },
  { 30, 31, 32, NO_LED, NO_LED, NO_LED },
  { 35, 34, 33, NO_LED, NO_LED, NO_LED }
}, {
  // LED Index to Physical Position`
  // Left Side (Bottom to top, left to right, every other row is backwards)
  { 50,  64 }, { 70,  64 }, { 90,  64 }, { 115, 64 }, { 115, 42 }, { 115, 28 }, 
  { 100, 48 }, { 80,  48 }, { 60,  48 }, { 40,  48 }, { 20,  48 }, { 0,   48 },
  { 0,   32 }, { 20,  32 }, { 40,  32 }, { 60,  32 }, { 80,  32 }, { 100, 32 }, 
  { 100, 3  }, { 80,  3  }, { 60,  3  }, { 40,  3  }, { 20,  3  }, { 0,   3  },
  { 0,   16 }, { 20,  16 }, { 40,  16 }, { 60,  16 }, { 80,  16 }, { 100, 16 }, 
  // Left Rear
  { 100, 3  }, { 60,  3  }, { 20,  3  }, { 20,  48 }, { 60,  64 }, { 100, 64 }
  // Right Side
  // { 140, 3 }, { 160, 3 }, { 180, 3 }, { 0,   0 }, { 0,   0 }, { 0,   0 },
  // { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 },
  // { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 },
  // { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 },
  // { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 },
  // // Right Rear
  // { 240, 3 }, { 210, 3 }, { 180, 3 }, {180,  48}, {210,  48}, {240,  48},
}, {
  // LED Index to Flag
  // Left Side (bottom to top, left to right, every other row is backwards)
   1, 1, 1, 4, 1, 1,
   4, 4, 4, 4, 4, 1,
   1, 4, 4, 4, 4, 4,
   4, 4, 4, 4, 4, 1,
   4, 4, 4, 4, 4, 4,
   2, 2, 2, 2, 2, 2,
} };

#endif // RGB_MATRIX_ENABLE