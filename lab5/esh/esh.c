#include <stdio.h>
#include <string.h>

#define PROMPT 10
#define CMD 100

int main() {
    char promt[PROMPT];
    char cmd[CMD];

    strcpy(promt, "$ ");
    /*printf("%s\n", promt);*/

    // get user input string with getchar
    char c;
    int i = 0;
    while ( (c = getchar()) != '\n' && (i < (CMD-1))   ) { cmd[i++] = c; }
    cmd[i] = '\0';
    printf("%s\n", cmd);

    
}
