#include <stdio.h>
#include <string.h>

#define PROMPT 10

#ifndef CMD
#define CMD 100
#endif

void getCmd(char *);

int main() {
    char promt[PROMPT];
    char cmd[CMD];

    printf("%d", CMD);

    strcpy(promt, "$ ");
    /*printf("%s\n", promt);*/

    while (1) {
        printf("%s ", promt);

        // get user input string with getchar
        getCmd(cmd);
        printf("%s\n", cmd);

    }

    
}
