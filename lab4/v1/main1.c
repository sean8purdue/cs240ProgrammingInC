// Program to inspect the 32 bits of unsigned int number

#include <stdio.h>

int main() {
    int i;
    unsigned int x, y, m;

    // read input
    scanf("%u", &x);

    // set mask to 00 ... 01
    m = ~(~(unsigned)0 << 1);

    // loop over all 32 bits from lsb to msb
    for(i=0; i<32; i++) {
        // zero out all bits but for lsb
        y = x & m;
        printf("%u\n", y);
        // right shift to inspect the next significant bit
        x = x >> 1;
    }

}

