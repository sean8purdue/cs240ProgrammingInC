#include <stdio.h>
#include <stdlib.h>

int read_vectors(int *size, float *x, float *y) {

    FILE *fp;
    
    fp = fopen("vecin.dat", "r");
    if (fp == NULL) {
        fprintf(stderr, "file vecin.dat not exist\n");
        exit(1);
    }
    
    fscanf(fp, "%d", size);
    printf("%d\n", *size);

    // input array x
    int i;
    for (i = 0; i < *size; i++)
        fscanf(fp, "%f", (x+i));
    for (i = 0; i < *size; i++)
        fprintf(stdout, "%f ", *(x+i));

    printf("\n");
    fclose(fp);

    return 0;
}
