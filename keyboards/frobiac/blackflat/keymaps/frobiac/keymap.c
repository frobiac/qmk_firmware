// Copyright 2023 @frobiac
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "frobiac.h" // include userspace for layouts

// clang-format off

/*
 *     ┌───┐   ┌───┬───┬───┐    ┌───┬───┬───┐RST┌───┐
 *     │MOU├───┤ Q │ . │ J │    │ P │ C │ L ├───┤Fx │
 *     ├───┤ U ├───┼───┼───┤    ├─[TP]──┼───┤ M ├───┤
 *     │ K ├───┤ E │ A │ O │    │ D │ T │ R ├───┤ F │
 *     ├───┤ I ├───┼───┼───┤    ├───┼───┼───┤ N ├───┤
 *     │ H ├───┤ - │ ; │ / │    │ D │ G │ W ├───┤ S │
 *     ├───┤ Y ├───┼───┼───┤    ├───┼───┼───┤ V ├───┤
 *     │ X ├───┤   │Tab│Spc│    │Esc│Bsp│Ret├───┤ Z │
 *     └───┘   └───┴───┴───┘    └───┴───┴───┘   └───┘
 *
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_FROBIAC] = LAYOUT_blackflat_4x12_wrapper( _FROBIAC_L ),
  [_QWERTZ]  = LAYOUT_blackflat_4x12_wrapper( _QWERTZ_L ),
  [_SYMBOLS] = LAYOUT_blackflat_4x12_wrapper( _SYMBOLS_L ),
  [_NAVNUM]  = LAYOUT_blackflat_4x12_wrapper( _NAVNUM_L ),
  [_FUNC]    = LAYOUT_blackflat_4x12_wrapper( _FUNC_L ),
  [_MOUSE]   = LAYOUT_blackflat_4x12_wrapper( _MOUSE_L),
};
// clang-format on
