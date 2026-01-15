#include QMK_KEYBOARD_H

#include "0pico.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        QK_BOOT,  
        KC_A 

    )
};