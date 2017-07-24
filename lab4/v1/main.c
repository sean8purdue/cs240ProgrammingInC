// Example code from pp. 49, K&R

#include <stdio.h>

int main() {

    unsigned int d, e;
    unsigned int getbits(unsigned int, int, int);

    d = 11;
    e = getbits(d,3,2);
    printf("%u\n",e);

}


unsigned int getbits(unsigned int x, int p, int n) {

    unsigned int a, b, c;

    a = x >> (p+1-n);
    b = ~(~0 << n);
    c = a & b;
    return c;

}
