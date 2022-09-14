#include "quantum.h"

#define ___ KC_NO

#define LAYOUT_split_3x5_2( \
        L01, L02, L03, L04, L05, R05, R04, R03, R02, R01, \
        L06, L07, L08, L09, L10, R10, R09, R08, R07, R06, \
        L11, L12, L13, L14, L15, R15, R14, R13, R12, R11, \
                  L16, L17, R17, R16       \
    ) \
    { \
        { L01, L02, L03, L04, L05 }, \
        { L06, L07, L08, L09, L10 }, \
        { L11, L12, L13, L14, L15 }, \
        { L16, L17, ___, ___ , ___}, \
        { R05, R04, R03, R02, R01 }, \
        { R10, R09, R08, R07, R06 }, \
        { R15, R14, R13, R12, R11 }, \
        { R17, R16, ___, ___, ___ }  \
    }

#define LAYOUT LAYOUT_split_3x5_2
