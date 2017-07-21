#include "dotheader.h"

void calc_diff(int size, float *x, float *y, float *u) {

    for (int i = 0; i < size; i++) {
        *(u+i) = *(x+i) - *(y+i);
    }
}
