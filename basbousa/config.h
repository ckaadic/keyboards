#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1337
#define PRODUCT_ID      0x3713
#define DEVICE_VER      0x3713
#define MANUFACTURER    Me
#define PRODUCT         Basbousa

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *                  NO_DIODE = switches are directly connected to AVR pins
 *
*/
#define DIRECT_PINS { \
    { B6, F6, D3, F4, F5 }, \
    { B2, B1, F7, D1, D0 }, \
    { B3, C6, D4, D7, E6 }, \
    { B5, B4, NO_PIN, NO_PIN, NO_PIN } \
}

#define DIRECT_PINS_RIGHT { \
    { F5, F4, D3, F6, B6 }, \
    { D0, D1, F7, B1, B2 }, \
    { E6, D7, D4, C6, B3 }, \
    { B4, B5, NO_PIN, NO_PIN, NO_PIN } \
}



#define UNUSED_PINS

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Serial settings */
#define USE_SERIAL
/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D2

//#define EE_HANDS

/* Top left key on left half */
#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0
/* Top right key on right half */
#define BOOTMAGIC_LITE_ROW_RIGHT    4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 4
