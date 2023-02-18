// Copyright 2023 @frobiac
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "frobiac.h" // include userspace for layouts

#define __THUMBS_TRNS_x12___ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS

// clang-format off

/*
 *     ┌─────┬───┬───┬───┬───┐───────┌───┬───┬───┬───┬─────┐
 *     │  K  │ U │ Q │ . │ J │       │ P │ C │ L │ M │ F   │
 *     ├────┬┴──┬┴──┬┴──┬┴──┬┘   _   └┬──┴┬──┴┬──┴┬──┴┬────┤
 *     │  H │ I │ E │ A │ O │   (_)   │ D │ T │ R │ N │ S  │
 *     ├───┬┴──┬┴──┬┴──┬┴──┬┴──┐   ┌──┴┬──┴┬──┴┬──┴┬──┴┬───┤
 *     │ X │ Y │ - │ , │ / │   │   │   │ B │ G │ W │ V │ Z │
 *     ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┐ ┌┴──┬┴──┬┴──┬┴──┬┴──┬┴───┤
 *     │    │   │   │Tab│Spc│   │o│   │Esc│Bsp│Ret│   │    │
 *     └────┴───┴───┴───┴───┴───┘─└───┴───┴───┴───┴───┴────┘
 *
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_FROBIAC] = LAYOUT_hypernano_4x12_wrapper( _FROBIAC_L ),
  [_QWERTZ]  = LAYOUT_hypernano_4x12_wrapper( _QWERTZ_L ),
  [_SYMBOLS] = LAYOUT_hypernano_4x12_wrapper( _SYMBOLS_L ),
  [_NAVNUM]  = LAYOUT_hypernano_4x12_wrapper( _NAVNUM_L ),
  [_FUNC]    = LAYOUT_hypernano_4x12_wrapper( _FUNC_L ),
  [_MOUSE]   = LAYOUT_hypernano_4x12_wrapper( _MOUSE_L),
};
// clang-format on
