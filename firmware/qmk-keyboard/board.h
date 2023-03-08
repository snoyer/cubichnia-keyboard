#pragma once

#include <quantum.h>

#define LAYOUT( \
    f3L, e1L, d1L, c1L, b1L, a1L,              a1R, b1R, c1R, d1R, e1R, f3R, \
    f1L, e2L, d2L, c2L, b2L, a2L, a4L,    a4R, a2R, b2R, c2R, d2R, e2R, f1R, \
    f2L, e3L, d3L, c3L, b3L, a3L, b4L,    b4R, a3R, b3R, c3R, d3R, e3R, f2R, \
              f4L,      e4L, d4L, c4L,    c4R, d4R, e4R,      f4R            \
) { \
    { a1L, b1L, c1L, d1L, e1L, f1L, }, \
    { a2L, b2L, c2L, d2L, e2L, f2L, }, \
    { a3L, b3L, c3L, d3L, e3L, f3L, }, \
    { a4L, b4L, c4L, d4L, e4L, f4L, }, \
\
    { a1R, b1R, c1R, d1R, e1R, f1R, }, \
    { a2R, b2R, c2R, d2R, e2R, f2R, }, \
    { a3R, b3R, c3R, d3R, e3R, f3R, }, \
    { a4R, b4R, c4R, d4R, e4R, f4R, }, \
}


#define XXX KC_NO

#define LAYOUT_split_3x6_3( \
    f3L, e1L, d1L, c1L, b1L, a1L,              a1R, b1R, c1R, d1R, e1R, f3R, \
    f1L, e2L, d2L, c2L, b2L, a2L,              a2R, b2R, c2R, d2R, e2R, f1R, \
    f2L, e3L, d3L, c3L, b3L, a3L,              a3R, b3R, c3R, d3R, e3R, f2R, \
                        e4L, d4L, c4L,    c4R, d4R, e4R                      \
) { \
    { a1L, b1L, c1L, d1L, e1L, f1L, }, \
    { a2L, b2L, c2L, d2L, e2L, f2L, }, \
    { a3L, b3L, c3L, d3L, e3L, f3L, }, \
    { XXX, XXX, c4L, d4L, e4L, XXX, }, \
\
    { a1R, b1R, c1R, d1R, e1R, f1R, }, \
    { a2R, b2R, c2R, d2R, e2R, f2R, }, \
    { a3R, b3R, c3R, d3R, e3R, f3R, }, \
    { XXX, XXX, c4R, d4R, e4R, XXX, }, \
}


#define LAYOUT_split_3x5_3( \
    e1L, d1L, c1L, b1L, a1L,              a1R, b1R, c1R, d1R, e1R, \
    e2L, d2L, c2L, b2L, a2L,              a2R, b2R, c2R, d2R, e2R, \
    e3L, d3L, c3L, b3L, a3L,              a3R, b3R, c3R, d3R, e3R, \
                   e4L, d4L, c4L,    c4R, d4R, e4R                 \
) { \
    { a1L, b1L, c1L, d1L, e1L, XXX, }, \
    { a2L, b2L, c2L, d2L, e2L, XXX, }, \
    { a3L, b3L, c3L, d3L, e3L, XXX, }, \
    { XXX, XXX, c4L, d4L, e4L, XXX, }, \
\
    { a1R, b1R, c1R, d1R, e1R, XXX, }, \
    { a2R, b2R, c2R, d2R, e2R, XXX, }, \
    { a3R, b3R, c3R, d3R, e3R, XXX, }, \
    { XXX, XXX, c4R, d4R, e4R, XXX, }, \
}


#define LAYOUT_ortho_4x12( \
    f3L, e1L, d1L, c1L, b1L, a1L, a1R, b1R, c1R, d1R, e1R, f3R, \
    f1L, e2L, d2L, c2L, b2L, a2L, a2R, b2R, c2R, d2R, e2R, f1R, \
    f2L, e3L, d3L, c3L, b3L, a3L, a3R, b3R, c3R, d3R, e3R, f2R, \
    a4L, b4L, f4L, e4L, d4L, c4L, c4R, d4R, e4R, f4R, b4R, a4R  \
) { \
    { a1L, b1L, c1L, d1L, e1L, f1L, }, \
    { a2L, b2L, c2L, d2L, e2L, f2L, }, \
    { a3L, b3L, c3L, d3L, e3L, f3L, }, \
    { a4L, b4L, c4L, d4L, e4L, f4L, }, \
\
    { a1R, b1R, c1R, d1R, e1R, f1R, }, \
    { a2R, b2R, c2R, d2R, e2R, f2R, }, \
    { a3R, b3R, c3R, d3R, e3R, f3R, }, \
    { a4R, b4R, c4R, d4R, e4R, f4R, }, \
}
