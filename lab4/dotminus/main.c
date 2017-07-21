#include "dotheader.h"

int main() {

    int size;
    float x[MAXSIZE];
    float y[MAXSIZE];

    if (read_vectors(&size, x, y) == -1) {
            fprintf(stderr,"Input not recognised as a float, please try again.\n");
            return -1;
    }

    // test for read_vectors
    /*printf("%d\n", size);*/
    for (int i = 0; i < size; i++) { printf("%f\n", *(x+i)); }
    for (int i = 0; i < size; i++) { printf("%f\n", *(y+i)); }


    // calculate dot product and magnitude
    float dp;
    float mgx;
    float mgy;

    dp = calc_dotmag(size, x, y, &mgx, &mgy);
    printf("%.2f %.2f %.2f\n", dp, mgx, mgy);

}
