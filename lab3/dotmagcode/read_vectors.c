#include <stdio.h>

int read_vectors(int *size, float *x, float *y) {

    scanf("%d", size);//Number of scanfs
    /*printf("%d", *size);*/

    int i = 0;
    while (i < *size) {
        scanf("%f", (x+i));
        printf("%f\n", *(x+i));
        i++;
    }
    
    i = 0;
    while (i < *size) {
        scanf("%f", (y+i));
        printf("%f\n", *(y+i));
        i++;
    }
    printf("\n");

    return 0;
}
