#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default layer
     * ,-----------------------------------------------------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|   |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|     |
     * |------------------------------------------------------|    |
     * |Esc   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|   |Ret |
     * |-----------------------------------------------------------|
     * |Shif|   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|   |Shift |
     * |-----------------------------------------------------------|
     * |Ctrl|Gui |Alt |      Space             |Alt |Gui |    |Ctrl|
     * `-----------------------------------------------------------'
     */
    KEYMAP_HIETALA(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,            \
        ESC, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,BSLS,ENT,        \
        LSFT,NO,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,NO,  RSFT,       \
        LCTL,LGUI,LALT,          SPC,                     RALT,RGUI,APP, RCTL),
};
const action_t PROGMEM fn_actions[] = {};
