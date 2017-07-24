#include <stdio.h>

#define MAXSIZE 300

int main() {
    char url[MAXSIZE];

    int i = 0;
    char c;
    while ( (c = getchar()) != '\n' ) {
        if (i < (MAXSIZE - 1) ) {
            //Upper to lower
            if ( (c >= 65) && (c <= 90) ) { c = c + 32; }
            url[i] = c;
        } else {
            printf("url should less than %d\n", MAXSIZE);
            return 1;
        }

        i++;
    }
    url[i] = '\0';
    
    printf("%s\n", url);
    /*printf("%c\n", url);*/
}
