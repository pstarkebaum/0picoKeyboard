#pragma once
#include "quantum.h"
#define XXX KC_NO

/* 
#define LAYOUT( \
    k00, \
    k10  \
) \
{ \
    { k00   }, \
    { k10   }, \
    { XXX }  \
}
*/

#define LAYOUT_40( \
      k00,   k01,   k02,   k03,   k04,                 k07,   k08,   k09,   k0A,   k0B, \
      k10,   k11,   k12,   k13,   k14,                 k17,   k18,   k19,   k1A,   k1B, \
      k20,   k21,   k22,   k23,   k24,                 k27,   k28,   k29,   k2A,   k2B, \
             k31,   k32,   k33,   k34,   k35,   k36,   k37,   k38,   k39,   k3A    \
) { \
    { k00,   k01,   k02,   k03,   k04,   XXX,   XXX,   XXX,   XXX,   XXX,   XXX,   XXX }, \
    { k10,   k11,   k12,   k13,   k14,   XXX,   XXX,   XXX,   XXX,   XXX,   XXX,   XXX }, \
    { k20,   k21,   k22,   k23,   k24,   XXX,   XXX,   XXX,   XXX,   XXX,   XXX,   XXX }, \
    { XXX,   k31,   k32,   k33,   k34,   k35,   XXX,   XXX,   XXX,   XXX,   XXX,   XXX }, \
    { XXX,   XXX,   XXX,   XXX,   XXX,   XXX,   XXX,   k07,   k08,   k09,   k0A,   k0B }, \
    { XXX,   XXX,   XXX,   XXX,   XXX,   XXX,   XXX,   k17,   k18,   k19,   k1A,   k1B }, \
    { XXX,   XXX,   XXX,   XXX,   XXX,   XXX,   XXX,   k27,   k28,   k29,   k2A,   k2B }, \
    { XXX,   XXX,   XXX,   XXX,   XXX,   XXX,   k36,   k37,   k38,   k39,   k3A,   XXX }  \
}
