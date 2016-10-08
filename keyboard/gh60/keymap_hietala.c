#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_HIETALA(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,            \
        ESC, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,BSLS,ENT,        \
        LSFT,NO,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,NO,  RSFT,       \
        LCTL,LGUI,LALT,          SPC,                     RALT,RGUI,APP, RCTL),
};
const action_t PROGMEM fn_actions[] = {};
