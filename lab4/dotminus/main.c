#include "dotheader.h"

int main() {

    int size;
    float x[MAXSIZE];
    float y[MAXSIZE];
    float u[MAXSIZE];

    if (read_vectors(&size, x, y) == -1) {
            fprintf(stderr,"Input not recognised as a float, please try again.\n");
            return -1;
    }

    // test for read_vectors
    /*printf("%d\n", size);*/
    int i;
    for (i = 0; i < size; i++) { printf("x[%d] = %f\n", i, *(x+i)); }
    for (i = 0; i < size; i++) { printf("y[%d] = %f\n", i, *(y+i)); }

    calc_diff(size, x, y, u);
    for (i = 0; i < size; i++) { printf("x[%d] - y[%d] = %f\n", i, i, *(u+i)); }

}
