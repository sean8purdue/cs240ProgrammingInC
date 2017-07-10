#include <stdio.h>

int main() {
    char c;
    while ( (c = getchar()) != '\n' ) {

        if ( (c >= 65) && (c <= 90) ) { //Upper to lower
            c = c + 32;
        } else if ( (c >= 97) && (c <= 122) ) { // lower to upper
            c = c - 32;
        } else if ( (c >= 48) && (c <= 57) ) { // 0 to A
            c = c + 17;
        } else { // others character to space
            c = ' '; 
        }

        printf("%c", c);
    }

    printf("\n");
}
