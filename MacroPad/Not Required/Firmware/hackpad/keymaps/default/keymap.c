// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
// keymap.c — Hackpad 6-key + rotary encoder
// Matrix: 2 rows × 4 columns (col 4 used only by encoder push button)

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        C(KC_C),    C(KC_V),    SGUI(KC_S),   MO(1),
        KC_MPRV,    KC_MPLY,    KC_MNXT
    ),

    [1] = LAYOUT(
        C(KC_Z),    C(KC_Y),    C(KC_S),      KC_TRNS,
        C(KC_X),    C(KC_A),    KC_DEL
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },   // Layer 0: volume
    [1] = { ENCODER_CCW_CW(KC_LEFT, KC_RGHT) },   // Layer 1: arrow keys
};
#endif