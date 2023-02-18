// Copyright 2023 @frobiac
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

// clang-format off


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

// clang-format on

void tp_reset(void);
