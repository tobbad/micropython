
#include "libm.h"

typedef union {
    double d;
    struct {
        uint64_t m : 52;
        uint64_t e : 11;
        uint64_t s : 1;
    };
} double_s_t;

double copysign(double x, double y) {
    double_s_t dx={.d = x};
    double_s_t dy={.d = y};

    // copy sign bit;
    dx.s = dy.s;

    return dx.d;
}
