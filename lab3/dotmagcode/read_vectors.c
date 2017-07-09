#include <stdio.h>

int read_vectors(int *size, float *x, float *y) {

    scanf("%d", size);//Number of scanfs
    /*printf("%d", *size);*/

    // input array x
    int i = 0;
    while (i < *size) {
        if ( (scanf("%f", (x+i)) ) != 1) {
            /*fprintf(stderr,"Input not recognised as a float, please try again.");*/
            return -1;
        }
        /*printf("%f\n", *(x+i));*/
        i++;
    }
    
    // input array y
    i = 0;
    while (i < *size) {
        if ( (scanf("%f", (y+i)) ) != 1) 
            return -1;
        i++;
    }
    printf("\n");

    return 0;
}
