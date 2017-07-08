#include <stdio.h>

int main() {
    char c;
    while ( (c = getchar()) != '\n' ) {

        if ( (c >= 65) && (c <= 90) ) {
            c = c + 32;
        } else if ( (c >= 97) && (c <= 122) ) {
            c = c - 32;
        }

        printf("%c", c);
    }

    printf("\n");
}
