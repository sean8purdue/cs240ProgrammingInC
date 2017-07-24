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

}
