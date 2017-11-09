#include <stdio.h>
#include <stdlib.h>

#define MAXNAME (100)
#define ROUND (128)

#define DEBUG

int main() {
    FILE *fpr, *fpw;
    int N;              // Encrypted factor ch = ch + N;
    char ch;            // input

    char file1[MAXNAME];
    char file2[MAXNAME];

    printf("pls input N, file1, file2\n");
    scanf("%d %99s %99s", &N, file1, file2);
    /*printf("%s\n", file1);*/

    // open file to read
    if ( (fpr = fopen(file1, "r")) == NULL ) {
        fprintf(stderr, "file %s does not exist\n", file1);
        exit(1);
    }

    if ( (fpw = fopen(file2, "w")) == NULL ) {
        fprintf(stderr, "create file %s fail\n", file2);
        exit(1);
    }

    while ( (ch = fgetc(fpr)) != EOF ) {

#ifdef DEBUG
        int sum = 0;
        sum = ch + N;
        /*ch = sum % ROUND;*/
        printf("ch = %d; sum = %d; newCh = %d\n", ch, sum, (ch+N)%ROUND);
#endif
        ch = (ch + N) % ROUND;
        /*fputc(ch, fpw);*/
        putc(ch, fpw);
    }

    fclose(fpr);
    fclose(fpw);

}
