/* ----------------------------------------------------------------------------
 * ergoDOX : matrix specific exports
 * ----------------------------------------------------------------------------
 * Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (MIT) (see "license.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */


#ifndef KEYBOARD__ERGODOX__MATRIX_h
    #define KEYBOARD__ERGODOX__MATRIX_h

    // --------------------------------------------------------------------

    #define KB_ROWS      7  // must match real life
    #define KB_COLUMNS  14  // must match real life

    // --------------------------------------------------------------------

    /* mapping from spatial position to matrix position
     * - spatial position: where the key is spatially, relative to other
     *   keys both on the keyboard and in the layout
     * - matrix position: the coordinate in the matrix to which a key is
     *   scanned by the update functions
     *
     * - location numbers are in the format `row##column`, where both 'row'
     *   and 'column' are single digit hex numbers corresponding to the
     *   matrix position (which also corresponds to the row and column pin
     *   labels used in the teensy and mcp23018 files)
     *
     * --- other info -----------------------------------------------------
     *           rows x columns = positions;  used,  unused
     * per hand:    7 x  7      = 49;         49,    0
     *    total:    7 x 14      = 98;         98,    0
     *
     * left hand  : rows 0..6, cols 0..6
     * right hand : rows 0..6, cols 7..D
     * --------------------------------------------------------------------
     */
    #define KB_MATRIX_LAYER(                         \
            /* left hand, spatial positions */       \
            k60,k61,k62,k63,k64,k65,k66,             \
            k50,k51,k52,k53,k54,k55,k56,             \
            k40,k41,k42,k43,k44,k45,k46,             \
            k30,k31,k32,k33,k34,k35,k36,             \
            k20,k21,k22,k23,k24,k25,                 \
            k10,k11,k12,k13,k14,                     \
                                        k26,k06,k05, \
                                    k15,k16,k04,k03, \
                                        k02,k01,k00, \
                                                     \
            /* right hand, spatial positions */      \
                k67,k68,k69,k6A,k6B,k6C,k6D,         \
                k57,k58,k59,k5A,k5B,k5C,k5D,         \
                k47,k48,k49,k4A,k4B,k4C,k4D,         \
                k37,k38,k39,k3A,k3B,k3C,k3D,         \
                    k28,k29,k2A,k2B,k2C,k2D,         \
                        k19,k1A,k1B,k1C,k1D,         \
            k08,k07,k27,                             \
            k0A,k09,k17,k18,                         \
            k0D,k0C,k0B )                            \
                                                     \
    /* matrix positions */                           \
    {{ k00,k01,k02,k03,k04,k05,k06, k07,k08,k09,k0A,k0B,k0C,k0D },  \
     { k10,k11,k12,k13,k14,k15,k16, k17,k18,k19,k1A,k1B,k1C,k1D },  \
     { k20,k21,k22,k23,k24,k25,k26, k27,k28,k29,k2A,k2B,k2C,k2D },  \
     { k30,k31,k32,k33,k34,k35,k36, k37,k38,k39,k3A,k3B,k3C,k3D },  \
     { k40,k41,k42,k43,k44,k45,k46, k47,k48,k49,k4A,k4B,k4C,k4D },  \
     { k50,k51,k52,k53,k54,k55,k56, k57,k58,k59,k5A,k5B,k5C,k5D },  \
     { k60,k61,k62,k63,k64,k65,k66, k67,k68,k69,k6A,k6B,k6C,k6D }}  \


    #define KB_MATRIX_LAYER_SET_ALL(na, kxx)         \
        LAYER(                                       \
            /* left hand, spatial positions */       \
            kxx,kxx,kxx,kxx,kxx,kxx,kxx,             \
            kxx,kxx,kxx,kxx,kxx,kxx,kxx,             \
            kxx,kxx,kxx,kxx,kxx,kxx,kxx,             \
            kxx,kxx,kxx,kxx,kxx,kxx,kxx,             \
            kxx,kxx,kxx,kxx,kxx,kxx,                 \
            kxx,kxx,kxx,kxx,kxx,                     \
                                        kxx,kxx,kxx, \
                                    kxx,kxx,kxx,kxx, \
                                        kxx,kxx,kxx, \
                                                     \
            /* right hand, spatial positions */      \
                kxx,kxx,kxx,kxx,kxx,kxx,kxx,         \
                kxx,kxx,kxx,kxx,kxx,kxx,kxx,         \
                kxx,kxx,kxx,kxx,kxx,kxx,kxx,         \
                kxx,kxx,kxx,kxx,kxx,kxx,kxx,         \
                    kxx,kxx,kxx,kxx,kxx,kxx,         \
                        kxx,kxx,kxx,kxx,kxx,         \
            kxx,kxx,kxx,                             \
            kxx,kxx,kxx,kxx,                         \
            kxx,kxx,kxx                              \
            )                
            

#endif

