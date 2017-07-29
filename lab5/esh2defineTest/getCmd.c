#include <stdio.h>

#define CMD 100

void getCmd(char *cmd) {
    char c;
    int i = 0;
    while ( (c = getchar()) != '\n' && (i < (CMD-1))   ) {
        cmd[i++] = c; 
    }
    cmd[i] = '\0';
}
