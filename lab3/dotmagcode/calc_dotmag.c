#include <math.h>

float calc_dotmag(int size, float *x, float *y, float *mgx, float *mgy) {

    float dp = 0;
    float xSum = 0;
    float ySum = 0;
    for (int i = 0; i < size; i++) {
        dp = dp + *(x+i) * *(y+i);
        xSum += *(x+i) * *(x+i);
        ySum += *(y+i) * *(y+i);
    }
    
    *mgx = sqrt(xSum);
    *mgy = sqrt(ySum);

    return dp;
}
