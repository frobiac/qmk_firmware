// Copyright 2023 @frobiac
// SPDX-License-Identifier: GPL-2.0-or-later
//
#pragma once

// has to be copied from QMK, but without "#include keymap.h" to be able to build from keyboards
#include "keymap_german.h"

// Contains a layout based on 'Aus der Neo-Welt', 'NordTast' and 'Neo' extra layers

// @TODO Based on german keymap

// Support
// 4x12  : HyperNano (2x2 unused)
// 3x5_3 : CrowBoard, cantor
// 3x5_2 : Sweep
// 4x5   : BlackBowl (3 thumbs, 1 extra upper right,  2x1 unused ring finger)
// 4x6   : RedTilt (see BlackBowl plus extra column)

/*
Since our quirky block definitions are basically a list of comma separated
arguments, we need a wrapper in order for these definitions to be
expanded before being used as arguments to the LAYOUT_xxx macro.
*/
#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

#define LAYOUT_hypernano_4x12_wrapper(...) LAYOUT_hypernano_4x12(__VA_ARGS__)
#define LAYOUT_blackflat_4x12_wrapper(...) LAYOUT_blackflat_4x12(__VA_ARGS__)
#define LAYOUT_sweep_3x5_2_wrapper(...) LAYOUT_sweep_3x5_2(__VA_ARGS__)

// clang-format off

// Copyright 2023 frobiac
// SPDX-License-Identifier: GPL-2.0-or-later

// @TODO created variant on US OS layout. Shows up nicer in tools and web editor, if json is created from it
// @TODO refactor into generic AdNW layer for use in other keyboards
// @TODO clear RHS, modifiers in mouse layer

#define _FROBIAC 0
#define _QWERTZ  1
#define _SYMBOLS 2
#define _NAVNUM  3
#define _FUNC    4
#define _MOUSE   5

// Cosmetic only: To neatly fit into 7 chars
#define _L_MOUS MO(_MOUSE)
#define _MOUS_X LT(_MOUSE, KC_X)
#define _L_FUNC MO(_FUNC)


#define _________________FROBIAC_L1________________         KC_K,    KC_U,    KC_Q,    KC_DOT,  KC_F
#define _________________FROBIAC_L2________________         KC_H,    KC_I,    KC_E,    KC_A,    KC_O
#define _________________FROBIAC_L3________________         _MOUS_X, DE_Y,    DE_MINS, KC_COMM, DE_SLSH

#define _________________FROBIAC_R1________________         KC_P,    KC_C,    KC_L,    KC_M,    KC_F
#define _________________FROBIAC_R2________________         KC_D,    KC_T,    KC_R,    KC_N,    KC_S
#define _________________FROBIAC_R3________________         KC_B,    KC_G,    KC_W,    KC_V,    DE_Z

#define _________________QWERTZ__L1________________         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTZ__L2________________         KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTZ__L3________________         DE_Y,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTZ__R1________________         DE_Z,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTZ__R2________________         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTZ__R3________________         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH


#define _________________SYMBOLS_L1________________         DE_AT,   DE_DEG,  DE_LBRC, DE_RBRC, DE_HASH
#define _________________SYMBOLS_L2________________         DE_BSLS, DE_EURO, DE_LCBR, DE_RCBR, DE_ASTR
#define _________________SYMBOLS_L3________________         XXXXXXX, DE_DLR,  DE_PIPE, DE_TILD, DE_GRV

#define _________________SYMBOLS_R1________________         DE_EXLM, DE_LABK, DE_RABK, DE_EQL,  DE_AMPR
#define _________________SYMBOLS_R2________________         DE_QUES, DE_LPRN, DE_RPRN, DE_PLUS, KC_ENT
#define _________________SYMBOLS_R3________________         DE_CIRC, DE_PERC, DE_DQUO, DE_QUOT, XXXXXXX


#define _________________NAV_NUM_L1________________         KC_PGUP, KC_BSPC,  KC_UP,  KC_DEL,  KC_PGDN
#define _________________NAV_NUM_L2________________         KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END
#define _________________NAV_NUM_L3________________         XXXXXXX, XXXXXXX, KC_INS,  XXXXXXX, XXXXXXX

#define _________________NAV_NUM_R1________________         DE_SS,   KC_7,    KC_8,    KC_9,    DE_ADIA
#define _________________NAV_NUM_R2________________         KC_DOT,  KC_4,    KC_5,    KC_6,    DE_ODIA
#define _________________NAV_NUM_R3________________         KC_0,    KC_1,    KC_2,    KC_3,    DE_UDIA


#define _________________FUNC_FX_L1________________         ____RECORDING_x3_________, XXXXXXX, XXXXXXX
#define _________________FUNC_FX_L2________________         ____DYNAMIC_MACRO_1_x3___, XXXXXXX, XXXXXXX
#define _________________FUNC_FX_L3________________         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#define _________________FUNC_FX_R1________________         XXXXXXX, KC_F7,   KC_F8,   KC_F9,   KC_F10
#define _________________FUNC_FX_R2________________         XXXXXXX, KC_F4,   KC_F5,   KC_F6,   KC_F11
#define _________________FUNC_FX_R3________________         XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F12


#define _________________MOUSE___L1________________         KC_WH_L, KC_BTN1, KC_MS_U, KC_BTN3, KC_BTN2
#define _________________MOUSE___L2________________         KC_WH_R, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_U
#define _________________MOUSE___L3________________         XXXXXXX, KC_BTN1, KC_BTN3, KC_BTN2, KC_WH_D

#define _________________MOUSE___R1________________         KC_ACL0, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define _________________MOUSE___R2________________         KC_ACL1, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define _________________MOUSE___R3________________         KC_ACL2, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT


// Only the hypernano has an extra column, with 4 keys mapped around trackpoint
#define ____HN_NONE___
#if defined(HYPERNANO_EXTRA_COLUMN)
#define ____HN_C3_____ XXXXXXX, XXXXXXX
#define ____HN_C4_____ XXXXXXX, XXXXXXX
#else
#define ____HN_C3_____ KB_NO, KB_NO
#define ____HN_C4_____ KB_NO, KB_NO
#endif

#define _______THUMBS_L_x3_______           KC_LGUI,               LCTL_T(KC_TAB),      LALT_T(KC_SPC)
#define _______THUMBS_R_x3_______           LT(_NAVNUM, KC_ESC),   LSFT_T(KC_BSPC),     LT(_SYMBOLS, KC_ENT)

#define _________________THUMBS_TRNS_x5____________         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS

#define ____DYNAMIC_MACRO_1_x3___ QK_DYNAMIC_MACRO_RECORD_START_1, QK_DYNAMIC_MACRO_RECORD_STOP, QK_DYNAMIC_MACRO_PLAY_1

#ifdef FEAT_RECORDING
#    define ____RECORDING_x3_________ REC_START, REC_STOP, REC_REPLAY
#else
#    define ____RECORDING_x3_________ KC_TRNS, KC_TRNS, KC_TRNS
#endif


#define _FROBIAC_L \
    _________________FROBIAC_L1________________,                 _________________FROBIAC_R1________________, \
    _________________FROBIAC_L2________________,                 _________________FROBIAC_R2________________, \
    _________________FROBIAC_L3________________, ____HN_C3_____, _________________FROBIAC_R3________________, \
    _L_MOUS, XXXXXXX, _______THUMBS_L_x3_______, ____HN_C4_____, _______THUMBS_R_x3_______, KC_RSFT, _L_FUNC

#define _QWERTZ_L \
    _________________QWERTZ__L1________________,                 _________________QWERTZ__R1________________, \
    _________________QWERTZ__L2________________,                 _________________QWERTZ__R2________________, \
    _________________QWERTZ__L3________________, ____HN_C3_____, _________________QWERTZ__R3________________, \
    _L_MOUS, XXXXXXX, _______THUMBS_L_x3_______, ____HN_C4_____, _______THUMBS_R_x3_______, KC_RSFT, _L_FUNC

#define _SYMBOLS_L \
    _________________SYMBOLS_L1________________,                 _________________SYMBOLS_R1________________, \
    _________________SYMBOLS_L2________________,                 _________________SYMBOLS_R2________________, \
    _________________SYMBOLS_L3________________, ____HN_C3_____, _________________SYMBOLS_R3________________, \
    _________________THUMBS_TRNS_x5____________, ____HN_C4_____, _________________THUMBS_TRNS_x5____________

#define _NAVNUM_L \
    _________________NAV_NUM_L1________________,                 _________________NAV_NUM_R1________________, \
    _________________NAV_NUM_L2________________,                 _________________NAV_NUM_R2________________, \
    _________________NAV_NUM_L3________________, ____HN_C3_____, _________________NAV_NUM_R3________________, \
    _________________THUMBS_TRNS_x5____________, ____HN_C4_____, _________________THUMBS_TRNS_x5____________

#define _FUNC_L \
    _________________FUNC_FX_L1________________,                 _________________FUNC_FX_R1________________, \
    _________________FUNC_FX_L2________________,                 _________________FUNC_FX_R2________________, \
    _________________FUNC_FX_L3________________, ____HN_C3_____, _________________FUNC_FX_R3________________, \
    _________________THUMBS_TRNS_x5____________, ____HN_C4_____, _________________THUMBS_TRNS_x5____________

#define _MOUSE_L \
    _________________MOUSE___L1________________,                 _________________MOUSE___R1________________, \
    _________________MOUSE___L2________________,                 _________________MOUSE___R2________________, \
    _________________MOUSE___L3________________, ____HN_C3_____, _________________MOUSE___R3________________, \
    _________________THUMBS_TRNS_x5____________, ____HN_C4_____, _________________THUMBS_TRNS_x5____________


#define xxx KC_NO


// Any changes to the layout names and/or definitions must also be made to info.json

/*  Row/col matrix: (0-based)
 *  unused in layout: 00,10,20, 45,55,65
 *  but used in matrix]  20/65 for innermost keys on row 3
 *
    ┌─────┬───┬───┬───┬───┐───────┌───┬───┬───┬───┬─────┐
    │  00 │01 │02 │03 │04 │       │40 │41 │42 │43 │44   │
    ├────┬┴──┬┴──┬┴──┬┴──┬┘   _   └┬──┴┬──┴┬──┴┬──┴┬────┤
    │ 10 │11 │12 │13 │14 │   (_)   │50 │51 │52 │53 │54  │
    ├───┬┴──┬┴──┬┴──┬┴──┬┴──┐   ┌──┴┬──┴┬──┴┬──┴┬──┴┬───┤
    │20 │21 │22 │23 │24 │25 │   │65 │60 │61 │62 │63 │64 │
    ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┐ ┌┴──┬┴──┬┴──┬┴──┬┴──┬┴───┤
    │ 30 │31 │32 │33 │34 │35 │ │75 │70 │71 │72 │73 │74  │
    └────┴───┴───┴───┴───┴───┘─└───┴───┴───┴───┴───┴────┘
 */
/// HyperNano custom board: 4 keys missing
#define LAYOUT_hypernano_4x12( \
    L00, L01, L02, L03, L04,           R00, R01, R02, R03, R04, \
    L10, L11, L12, L13, L14,           R10, R11, R12, R13, R14, \
    L20, L21, L22, L23, L24, L25, R25, R20, R21, R22, R23, R24, \
    L30, L31, L32, L33, L34, L35, R35, R30, R31, R32, R33, R34 \
    ) \
    { \
        { L00, L01, L02, L03, L04, xxx }, \
        { L10, L11, L12, L13, L14, xxx }, \
        { L20, L21, L22, L23, L24, L25 }, \
        { L30, L31, L32, L33, L34, L35 }, \
        { R00, R01, R02, R03, R04, xxx }, \
        { R10, R11, R12, R13, R14, xxx }, \
        { R20, R21, R22, R23, R24, R25 }, \
        { R30, R31, R32, R33, R34, R35 } \
    }


/*
    BlackFlat: RedTilt without outer pinky columns, with 4th button on pinky bottom row
    and hooked up to former bluecube teensy with limited working pins
    BlackBowl: Identical layout-wise, but with I2C for both halves.

    (31), (73) and RST are PCB push-buttons

    ┌───┐   ┌───┬───┬───┐    ┌───┬───┬───┐RST┌───┐
    │30 ├───┤02 │03 │04 │    │40 │41 │42 ├───┤74 │
    ├───┤01 ├───┼───┼───┤    ├─[TP]──┼───┤43 ├───┤
    │00 ├───┤12 │13 │14 │    │50 │51 │52 ├───┤44 │
    ├───┤11 ├───┼───┼───┤    ├───┼───┼───┤53 ├───┤
    │10 ├───┤22 │23 │24 │    │60 │61 │62 ├───┤54 │
    ├───┤21 ├───┼───┼───┤    ├───┼───┼───┤63 ├───┤
    │20 ├───┤32 │33 │34 │    │70 │71 │72 ├───┤64 │
    └───┘31 └───┴───┴───┘    └───┴───┴───┘73 └───┘

*/
#define LAYOUT_blackflat_4x12( \
    L00, L01, L02, L03, L04,             R00, R01, R02, R03, R04, \
    L10, L11, L12, L13, L14,             R10, R11, R12, R13, R14, \
    L20, L21, L22, L23, L24, _L25, _R25, R20, R21, R22, R23, R24, \
    L30, _LR, L32, L33, L34, _L35, _R35, R30, R31, R32, _RR, R34 \
    ) \
    { \
        { L00, L01, L02, L03, L04 }, \
        { L10, L11, L12, L13, L14 }, \
        { L20, L21, L22, L23, L24 }, \
        { L30, _LR, L32, L33, L34 }, \
        { R00, R01, R02, R03, R04 }, \
        { R10, R11, R12, R13, R14 }, \
        { R20, R21, R22, R23, R24 }, \
        { R30, R31, R32, _RR, R34 } \
    }

#define LAYOUT_sweep_3x5_2( \
    L00, L01, L02, L03, L04,             R00, R01, R02, R03, R04, \
    L10, L11, L12, L13, L14,             R10, R11, R12, R13, R14, \
    L20, L21, L22, L23, L24, _L25, _R25, R20, R21, R22, R23, R24, \
    _3a, _3b, _3c, L33, L34, _L35, _R35, R30, R31, _3x, _3y, _3z \
    ) \
    { \
        { L00, L01, L02, L03, L04 }, \
        { L10, L11, L12, L13, L14 }, \
        { L20, L21, L22, L23, L24 }, \
        {                L33, L34 }, \
        { R00, R01, R02, R03, R04 }, \
        { R10, R11, R12, R13, R14 }, \
        { R20, R21, R22, R23, R24 }, \
        { R30, R31                } \
    }

// clang-format on
