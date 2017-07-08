#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp, *fpw;

    // open file to read
    if ( (fp = fopen("test.dat", "r")) == NULL ) {
        fprintf(stderr, "file test.dat does not exist\n");
        exit(1);
    }

    // open file to write
    fpw = fopen("output.dat", "w");
    if ( fpw == NULL ) {
        fprintf(stderr, "creating write file failed\n");
        exit(1);
    }

    // read data
    char c;
    while ( (c = fgetc(fp)) != EOF) {
        putc(c, fpw);
    }
}
