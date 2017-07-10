#include <stdio.h>
#include <stdlib.h>

#define MAXNAME 100

int main() {
    FILE *fp, *fpw;
    int N;
    char filename1[MAXNAME];
    char filename2[MAXNAME];

    /*scanf("%d %s %s", &N, filename1, filename2);*/
    scanf("%d %99s %s", &N, filename1, filename2);
    printf("%99s", filename1);
    /*printf("%s %s\n", filename1, filename2);*/

    // open file to read
    if ( (fp = fopen(filename1, "r")) == NULL ) {
        fprintf(stderr, "file %s does not exist\n", filename1);
        exit(1);
    }

    // open file to write
    fpw = fopen(filename2, "w");
    if ( fpw == NULL ) {
        fprintf(stderr, "creating %s file failed\n", filename2);
        exit(1);
    }

    // read data
    char c;
    while ( (c = fgetc(fp)) != EOF) {

        //encrypt
        c = (c + N) % 128;
        putc(c, fpw);
    }
    putc('\n', fpw);

    fclose(fp);
    fclose(fpw);
}
