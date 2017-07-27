#include "dotheader.h"


void calc_power(int size, float *x , float *y, float *u) {

    int i;
    for (i = 0; i < size; i++) {
        *(u+i) = pow( *(x+i) - *(y+i), 2 );
    }
}
