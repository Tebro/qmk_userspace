
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_5x12(
        KC_ESC,   KC_1,   KC_2,     KC_3,   KC_4,     KC_5,    KC_6,    KC_7,   KC_8,     KC_9,     KC_0,     KC_BSPC,
        KC_TAB,   KC_Q,   KC_W,     KC_E,   KC_R,     KC_T,    KC_Y,    KC_U,   KC_I,     KC_O,     KC_P,     KC_LBRC,
        KC_BSPC,  KC_A,   KC_S,     KC_D,   KC_F,     KC_G,    KC_H,    KC_J,   KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
        KC_LSFT,  KC_Z,   KC_X,     KC_C,   KC_V,     KC_B,    KC_N,    KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT,
        KC_LCTL,  MO(3),  KC_LALT,  MO(1),  KC_LGUI,  KC_SPC,  KC_ENT,  MO(2),  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RCTL
    ),
    [1] = LAYOUT_ortho_5x12(
        _______,  _______,  _______,  _______,  _______,     _______,  _______,  _______,     _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,     _______,  _______,  HYPR(KC_U),  _______,  _______,  _______,  _______,
        KC_DEL,   _______,  _______,  _______,  HYPR(KC_F),  _______,  KC_LEFT,  KC_DOWN,     KC_UP,    KC_RGHT,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,     _______,  _______,  _______,     _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,     _______,  _______,  _______,     KC_MNXT,  KC_VOLD,  KC_VOLU,  KC_MPLY
    ),
    [2] = LAYOUT_ortho_5x12(
        _______,  KC_F1,    KC_F2,    KC_F3,       KC_F4,       KC_F5,       KC_F6,    KC_F7,    KC_F8,  KC_F9,    KC_F10,   KC_F11,
        _______,  _______,  S(KC_2),  S(KC_LBRC),  S(KC_RBRC),  S(KC_BSLS),  KC_NUM,   KC_P7,    KC_P8,  KC_P9,    S(KC_8),  KC_F12,
        KC_DEL,   KC_MINS,  S(KC_4),  S(KC_9),     S(KC_0),     KC_GRV,      _______,  KC_P4,    KC_P5,  KC_P6,    _______,  _______,
        _______,  KC_EQL,   S(KC_6),  KC_LBRC,     KC_RBRC,     S(KC_GRV),   S(KC_7),  KC_P1,    KC_P2,  KC_P3,    KC_BSLS,  _______,
        _______,  _______,  _______,  _______,     _______,     _______,     _______,  _______,  KC_P0,  KC_PDOT,  _______,  _______
    ),
    [3] = LAYOUT_ortho_5x12(
        RGB_TOG,  RGB_M_P,   RGB_M_B,  RGB_M_R,  RGB_M_SW,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  RGB_RMOD,  RGB_VAI,  RGB_MOD,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  RGB_HUD,   RGB_VAD,  RGB_HUI,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  RGB_SAD,   _______,  RGB_SAI,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,   _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______
    )
};






