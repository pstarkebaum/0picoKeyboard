#include QMK_KEYBOARD_H
#include "0pico.h"   
/*
#define LAYOUT_40( \
    k00,  \
    k10  \
      \
) { \
    { k00   }, \
    { k10   } \
}
*/

// Force linker to include dynamic_keymap.o symbols
//void *dummy = (void *)dynamic_keymap_get_alt_repeat_key;
//void *dummy2 = (void *)dynamic_keymap_get_qmk_settings;
//void *dummy3 = (void *)dynamic_keymap_set_qmk_settings;
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        QK_BOOT, 
        KC_A  
    )
};