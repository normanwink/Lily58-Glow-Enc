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
  { 29, 28, 27, 26, 25, 24 },
  { 18, 19, 20, 21, 22, 23 },
  { 17, 16, 15, 14, 13, 12 },
  { 6, 7, 8, 9, 10, 11 },
  { 5, 4, 3, 2, 1, 0 },
  // Right Side
  { NO_LED, NO_LED, NO_LED, 38    , 37    , 36     },
  { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED }
}, {
  // LED Index to Physical Position`
  // Left Side (Bottom to top, left to right, every other row is backwards)
  { 50,  64 }, { 70,  64 }, { 90,  64 }, { 115, 64 }, { 115, 42 }, { 115, 28 }, 
  { 100, 48 }, { 80,  48 }, { 60,  48 }, { 40,  48 }, { 20,  48 }, { 0,   48 },
  { 0,   32 }, { 20,  32 }, { 40,  32 }, { 60,  32 }, { 80,  32 }, { 100, 32 }, 
  { 100, 3  }, { 80,  3  }, { 60,  3  }, { 40,  3  }, { 20,  3  }, { 0,   3  },
  { 0,   16 }, { 20,  16 }, { 40,  16 }, { 60,  16 }, { 80,  16 }, { 100, 16 }, 
  // Right Side
  { 140, 3 }, { 160, 3 }, { 180, 3 }, { 0,   0 }, { 0,   0 }, { 0,   0 },
  { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 },
  { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 },
  { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 },
  { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }, { 0,   0 }
}, {
  // LED Index to Flag
  // Left Side (bottom to top, left to right, every other row is backwards)
   1, 1, 1, 4, 1, 1,
   4, 4, 4, 4, 4, 1,
   1, 4, 4, 4, 4, 4,
   4, 4, 4, 4, 4, 1,
   4, 4, 4, 4, 4, 4,
  // Right Side (bottom to top, left to right)
   4, 4, 4, 4, 4, 4,
   4, 4, 4, 4, 4, 4,
   4, 4, 4, 4, 4, 4,
   4, 4, 4, 4, 4, 4,
   4, 4, 4, 4, 4, 4,
} };

#endif // RGB_MATRIX_ENABLE