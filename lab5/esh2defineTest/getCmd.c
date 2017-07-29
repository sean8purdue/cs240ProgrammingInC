#include <stdio.h>

#define CMD 60

#ifndef CMD
#define CMD 50
#endif

void getCmd(char *cmd) {
    char c;
    int i = 0;

    printf("%d", CMD);

    while ( (c = getchar()) != '\n' && (i < (CMD-1))   ) {
        cmd[i++] = c; 
    }
    cmd[i] = '\0';
}
