#include <stdio.h>
#include <stdlib.h>

#define MAXNAME 3

int main() {
    FILE *fp, *fpw;
    int N;
    char filename1[MAXNAME];
    char filename2[MAXNAME];
    /*char out[5] = ['a', 'b', 'c', 'd', '\0'];*/
    char out[27] = "abcdefghijklmnopqrstuvwxyz";


    /*scanf("%d %s %s", &N, filename1, filename2);*/
    /*scanf("%d %99s %s", &N, filename1, filename2);*/
    printf( "start from beginning: %.7s\n", out);   // stops after thirteen characters.

    // get the address of the fifth character, start from that address, print the string
    printf( "start from 5, print offset 6: %.6s\n", &out[5] );  // prints three characters of the string that starts at offset 13

    // compile error: out[5] is a charcater
    /*printf( "start from 5, print offset 6: %.6s\n", out[5] );*/

    printf("check last character: %c\n", out[25]);
    printf("check last character: %c\n", out[26]);
    // array out of bound
    /*printf("check last character: %c\n", out[27]);*/
}
