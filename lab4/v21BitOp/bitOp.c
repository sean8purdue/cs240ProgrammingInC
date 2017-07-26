#include <stdio.h>

int main() {
    unsigned int in, out;
    unsigned int m;

    scanf("%d", &in);
    /*printf("%d\n", in);*/

    // set mask
    m = ~(~ ((unsigned int)0) << 4);
    // ~0 = 1111 1111 1111 1111 1111 1111 1111 1111
    // ~0 << 4 = 
    //  ~0 << 4 = 1111 1111 1111 1111 1111 1111 1111 0000

    /*out = in & m;*/
    /*printf("%u, %x", out, out);*/
    /*printf("\n");*/

    for (int i = 0; i < 8; i++) {
        out = in & m;
        printf("%u, %x\n", out, out);

        in = in >> 4;
    }

    // Problem 2 part 2: largest unsigned value
    unsigned int max;
    max = 0xFFFFFFFF;
    printf("%u, %x\n", max, max);
    // 2^32 = 4294967296
    // print 4294967295, ffffffff

    for (int i = 0; i < 8; i++) {
        out = max & m;
        printf("%u, %x\n", out, out);

        max = max >> 4;
    }



}
