#include "dotheader.h"

int main() {

    int size;
    float x[MAXSIZE];
    float y[MAXSIZE];

    read_vectors(&size, x, y);

    // test for read_vectors
    printf("%d\n", size);
    for (int i = 0; i < size; i++) { printf("%f\n", *(x+i)); }
    for (int i = 0; i < size; i++) { printf("%f\n", *(y+i)); }

}
