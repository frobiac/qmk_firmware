// Copyright 2023 @frobiac
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

void my_custom_function(void);

#if defined(PS2_MOUSE_ENABLE) && defined(PS2_RESET_PIN)
void tp_reset(void);
#endif
