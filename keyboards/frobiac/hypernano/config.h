// Copyright 2023 @frobiac
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#ifdef PS2_MOUSE_ENABLE
#    define PS2_RESET_PIN B0
#    define PS2_DATA_PIN B1
#    define PS2_CLOCK_PIN B2

#    define PS2_MOUSE_INVERT_X
#    define PS2_MOUSE_INVERT_Y

#    define PS2_MOUSE_USE_REMOTE_MODE
#    define PS2_MOUSE_INIT_DELAY 1000
#endif

// clang-format off

// This is the default. @TODO Use for example RCTL in mouse layer to be consistent within boards?
#define IS_COMMAND() ( \
        ((get_mods() | get_oneshot_mods()) == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT))) \
)

// clang-format on
