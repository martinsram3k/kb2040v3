#include QMK_KEYBOARD_H

#include "hardware/gpio.h"

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // první enkodér
        if (clockwise) {
            tap_code(KC_LEFT); // otočení po směru hodinových ručiček - zvýšení hlasitosti
        } else {
            tap_code(KC_RIGHT); // otočení proti směru hodinových ručiček - snížení hlasitosti
        }
    }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { // definice vrstev

// Definice vrstev pro keymap.c s KAZDOU klávesou nastavenou na KC_NO.

// Definice vrstev pro keymap.c pro 4x4 makropad.
// Všechny klávesy jsou nastaveny na KC_NO (No Operation).

[0] = LAYOUT_martin_4x4( // základní vrstva
    KC_NO, KC_NO, KC_NO, KC_NO, // Row 0
    KC_NO, KC_NO, KC_NO, KC_NO, // Row 1
    KC_NO, KC_NO, KC_NO, KC_NO, // Row 2
    KC_NO, KC_NO, KC_NO, KC_NO  // Row 3
),

        

[1] = LAYOUT_martin_4x4( // druhá vrstva
    KC_NO, KC_NO, KC_NO, KC_NO, // Row 0
    KC_NO, KC_NO, KC_NO, KC_NO, // Row 1
    KC_NO, KC_NO, KC_NO, KC_NO, // Row 2
    KC_NO, KC_NO, KC_NO, KC_NO  // Row 3
),

     


[2] = LAYOUT_martin_4x4( // třetí vrstva
    KC_NO, KC_NO, KC_NO, KC_NO, // Row 0
    KC_NO, KC_NO, KC_NO, KC_NO, // Row 1
    KC_NO, KC_NO, KC_NO, KC_NO, // Row 2
    KC_NO, KC_NO, KC_NO, KC_NO  // Row 3
),

       

[3] = LAYOUT_martin_4x4( // settings vrstva
    KC_NO, KC_NO, KC_NO, KC_NO, // Row 0
    KC_NO, KC_NO, KC_NO, KC_NO, // Row 1
    KC_NO, KC_NO, KC_NO, KC_NO, // Row 2
    KC_NO, KC_NO, KC_NO, KC_NO  // Row 3
)



        
};



