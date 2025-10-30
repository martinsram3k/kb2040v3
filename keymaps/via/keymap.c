#include QMK_KEYBOARD_H

#include "hardware/gpio.h"

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

// V souboru keymap.c (obvykle v části po definici vrstev)

// Pole, které definuje funkce pro otáčení encoderu na každé vrstvě
const uint16_t PROGMEM encoder_map[][2] = {
    // [vrstva] = { otoceni proti smeru hod. rucice, otoceni po smeru hod. rucice }
    
    [0] = { KC_VOLD, KC_VOLU },    // Vrstva 0: Ovládání hlasitosti (Dolů, Nahoru)
    [1] = { KC_MPRV, KC_MNXT },    // Vrstva 1: Předchozí/Další stopa
    [3] = { KC_NO, KC_NO }         // Vrstva 3: Žádná funkce
};

