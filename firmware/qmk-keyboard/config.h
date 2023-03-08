#pragma once

#define MATRIX_ROWS 4*2
#define MATRIX_COLS 6
#define MATRIX_COL_PINS { B4, B1, F6, F5, F4, F7 }
#define MATRIX_ROW_PINS { B3, B6, B2, B5 }
#define DIODE_DIRECTION COL2ROW

#define USE_I2C
#define SPLIT_USB_DETECT
#define EE_HANDS
