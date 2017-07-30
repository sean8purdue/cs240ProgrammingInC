#include <stdio.h>
#include <string.h>

#include "debug.h"

#define PROMPT 10
#define CMD 100
#define ARGC 20


void prompt(char *);
char * getCmd();
void lexer(char *, int *, char **);

int main() {
    char *promt;
    char *cmd;
    int argc = 0;
    char **args;
    args = (char **) malloc( ARGC * sizeof(char *) );

    while (1) {

        prompt(promt);
        // get user input string with getchar
        cmd = getCmd(cmd);
        DPRINTS(cmd);
        /*lexer(cmd, &argc, args);*/

    }
        /*for (int i = 0; i <= argc; i++) {*/
            /*DPRINTSD(args[i], i);*/
            /*free(args[i]);*/
        /*}*/
        /*free(args);*/
}

void prompt(char * promt) {
    char promtA[PROMPT];
    promt = promtA;

    strcpy(promt, "$ ");
    printf("%s ", promt);
    fflush(stdout);
}

/*void getCmd(char *cmd) {*/
char * getCmd() {
    char * cmd = (char *) malloc( CMD * sizeof(char) );
    char c;
    int i = 0;
    while ( (c = getchar()) != '\n' && (i < (CMD-1))   ) {
        cmd[i++] = c; 
    }
    cmd[i] = '\0';
    return cmd;
}

void lexer(char *cmd, int *argc, char **args) {
    const char *ptr;
    
    do {
        ptr = strchr(cmd, ' ');
        if (ptr) {
            // note: may not detect the second space in cmd;
            int index = ptr - cmd;
            /*DPRINTD(index);*/


            args[*argc] = (char *) malloc( (index + 1) * sizeof(char));
            // memset(), fill args[i] with all '\0'
            memset(args[*argc], '\0', sizeof(*args[*argc]) );
            strncpy(args[*argc], cmd, index);
            // add End of string in the end
            /*args[i][index] = '\0';*/
            (*argc)++;


            cmd = cmd + index + 1;
            /*DPRINTS(cmd);*/
        }

    } while ( *argc < ARGC && ptr );

    args[*argc] = (char *) malloc( (strlen(cmd)+1) * sizeof(char) );
    memset(args[*argc], '\0', sizeof(*args[*argc]) );
    DPRINTSD("argc:", *argc);
    strcpy(args[*argc], cmd);

}
