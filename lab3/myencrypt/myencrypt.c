#include <stdio.h>
#include <stdlib.h>

#define MYDEBUG

int main() {
    FILE *fp, *fpw;
    int N = 5;

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

#ifdef MYDEBUG
        printf("%d ->  ", c);
        /*c = c % 128;*/
        c = (c + N) % 128;
        printf("%d\n", c);
#endif
        //encrypt
        c = (c + N) % 128;
        putc(c, fpw);
    }
    putc('\n', fpw);

/*#ifdef MYDEBUG*/
        /*printf("%d ->  ", c);*/
/*#endif*/

    fclose(fp);
    fclose(fpw);
}
