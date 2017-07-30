#include <stdio.h>
#include <string.h>

#include "debug.h"

#define PROMPT 10
#define CMD 100
#define ARGC 20


void getCmd(char *);
void lexer(char *, char * []);

int main() {
    char promt[PROMPT];
    char cmd[CMD];
    char *args[ARGC];

    strcpy(promt, "$ ");
    /*printf("%s\n", promt);*/

    while (1) {
        printf("%s ", promt);

        // get user input string with getchar
        getCmd(cmd);
        DPRINTS(cmd);
        lexer(cmd, args);

    }
    
}

void getCmd(char *cmd) {
    char c;
    int i = 0;
    while ( (c = getchar()) != '\n' && (i < (CMD-1))   ) {
        cmd[i++] = c; 
    }
    cmd[i] = '\0';
}

void lexer(char *cmd, char *args[]) {
    char arg[CMD] = "";

    const char *ptr = strchr(cmd, ' ');
    if (ptr) {
        int index = ptr - cmd;
        DPRINTD(index);

        strncpy(arg, cmd, index);
        DPRINTS(arg);
        /*error("testError\n");*/

        cmd = cmd + index + 1;
        DPRINTS(cmd);
    }

}
