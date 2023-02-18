// Copyright 2023 @frobiac
// SPDX-License-Identifier: GPL-2.0-or-later

#include "hypernano.h"

/// hook up tp_reset() in matrix init.
void keyboard_pre_init_user() {
#if defined(PS2_MOUSE_ENABLE) && defined(PS2_RESET_PIN)
    tp_reset();
#endif
}
