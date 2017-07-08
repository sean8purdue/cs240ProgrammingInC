#include <stdio.h>

int main() {
    int i;

    i = 0;
    printf("%d -> %d\n", i, i % 128);

    i = 1;
    printf("%d -> %d\n", i, i % 128);

    i = 127;
    printf("%d -> %d\n", i, i % 128);

    i = 128;
    printf("%d -> %d\n", i, i % 128);
}
