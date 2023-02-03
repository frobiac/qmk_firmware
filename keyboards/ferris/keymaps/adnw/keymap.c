#include QMK_KEYBOARD_H

#include "keymap_german.h"

// clang-format off

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum ferris_layers {
  _QWERTY,
  _SYMBOL,
  _NAVNUM,
  _FUNC,
  _MOUSE,
};


/*
#define KC_CTSC RCTL_T(KC_SCLN)
#define KC_CTLA LCTL_T(KC_A)
#define KC_LSHZ LSFT_T(KC_Z)
#define KC_RLSH RSFT_T(KC_SLSH)
#define KC_SPM2 LT(2, KC_SPC)
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_GUTA GUI_T(KC_TAB)
#define KC_CLGV CTL_T(KC_GRV)
*/

#define KC_THLM LCTL_T(KC_TAB)
#define KC_THLR LSFT_T(KC_SPC)
#define KC_THRL LT(2,KC_ESC)
#define KC_THRM LT(1,KC_BSPC)

/*
 * Changes compared to AdNW firmware:
 * - less thumbs
 * - no underscore on shifted minus (would need extra shift layer
 * - modifiers on home row 
 * - backspace in movement layer : Does not repeat on thumb key
 *
 *
  @TODO 
  QK_BOOT
  TAPDANCE
  VI: shift + ':'
  consider putting shift onto left thumb cluster in favour of Ctrl- or Alt
  Could also use Meta or Macro combo for i3 or tmux
*/       

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// # Layer 0 & Mod1 ( letters shifted)
//    K  U  Q  .: J     P  C  L  M  F
//    H  I  E  A  O     D  T  R  N  S
//    X  Y  -_ ,; /     B  G  W  V  Z
//
  [_QWERTY] = LAYOUT(
    LGUI_T(KC_K), KC_U,    KC_Q,       KC_DOT,  KC_J,    KC_P, KC_C, KC_L, KC_M, KC_F,
    LSFT_T(KC_H), KC_I,    LT(3,KC_E), KC_A,    KC_O,    KC_D, KC_T, KC_R, LALT_T(KC_N), LSFT_T(KC_S),
    LT(4,KC_X)  , DE_Y,    DE_MINS,    KC_COMM, DE_SLSH, KC_B, KC_G, KC_W, KC_V, DE_Z,
    KC_THLM,      KC_THLR, KC_THRL,    KC_THRM
  ),

//# M2 / special
//    @  °  [  ]  #     !  <  >  =  &
//    \  €  {  }  *     ?  (  )  +  Ret
//    _  $  |  ~  `     ^  %  "  '
// 
  [_SYMBOL] = LAYOUT(
    DE_AT,   DE_DEG,  DE_LBRC, DE_RBRC, DE_HASH, DE_EXLM, DE_LABK, DE_RABK, DE_EQL,  DE_AMPR,
    DE_BSLS, DE_EURO, DE_LCBR, DE_RCBR, DE_ASTR, DE_QUES, DE_LPRN, DE_RPRN, DE_PLUS, KC_ENT,
    XXXXXXX, DE_DLR,  DE_PIPE, DE_TILD, DE_GRV,  DE_CIRC, DE_PERC, DE_DQUO, DE_QUOT, XXXXXXX,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

//# M3 / MoveNum
//    PgUp BkSp  Up  Del  PgDo   ß 7 8 9 ä
//    Pos1 Left Down Righ End    . 4 5 6 ö
//              Ins              0 1 2 3 ü

  [_NAVNUM] = LAYOUT(
    KC_PGUP, KC_BSPC,  KC_UP,  KC_DEL,  KC_PGDN, DE_SS,  KC_7, KC_8, KC_9, DE_ADIA,
    KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  KC_DOT, KC_4, KC_5, KC_6, DE_ODIA,
    XXXXXXX, XXXXXXX, KC_INS,  XXXXXXX, XXXXXXX, KC_0,   KC_1, KC_2, KC_3, DE_UDIA,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_FUNC] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F7, KC_F8, KC_F9, KC_F10,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F4, KC_F5, KC_F6, KC_F11,
    XXXXXXX, XXXXXXX, KC_INS,  XXXXXXX, XXXXXXX, XXXXXXX, KC_F1, KC_F2, KC_F3, KC_F12,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_MOUSE] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MS_ACCEL0, KC_BTN1, KC_BTN2, KC_BTN3, XXXXXXX,
    KC_BTN4, KC_BTN3, KC_BTN2, KC_BTN1, XXXXXXX, KC_MS_ACCEL1, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MS_ACCEL2, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),
};

