#include <stdio.h>
#include <string.h>

#include "debug.h"

#define PROMPT 10
#define CMD 100
#define ARGC 20


char * prompt();
char * getCmd();
void clear(char *, char *, int *, char **);
char ** lexer(char *, int *);
void run(int argc, const char **args);

int main() {
    char *promt = NULL;
    char *cmd = NULL;

    int argc = 0;
    char **args = NULL;

    while (1) {

        promt = prompt();
        cmd = getCmd(cmd);
        /*DPRINTS(cmd);*/

        args = lexer(cmd, &argc);
/*#ifdef DEBUG*/
        /*for(int i = 0; i <= argc; i++)*/
            /*DS(i, args[i]);*/
/*#endif*/

        run(argc, (const char **)args);

        clear(promt, cmd, &argc, args);
    }
}

char * prompt() {
    char * promt = (char *) malloc( (PROMPT+1) * sizeof(char) );
    memset(promt, '\0', sizeof(*promt));
    strcpy(promt, "$ ");

    printf("%s ", promt);
    fflush(stdout);

    return promt;
}

char * getCmd() {
    char * cmd = (char *) malloc( CMD * sizeof(char) );
    char c;
    int i = 0;
    // get user input string with getchar
    while ( (c = getchar()) != '\n' && (i < (CMD-1))   ) {
        cmd[i++] = c; 
    }
    cmd[i] = '\0';
    return cmd;
}

void clear(char *prompt, char *cmd, int *argc, char **args) {
    free(prompt);
    free(cmd);

    for (int i = 0; i <= *argc; i++) {
        free(args[i]);
    }
    free(args);
    args = NULL;
    *argc = 0;

}

char** lexer(char *cmd, int *argc) {
    char **args = (char **) malloc( ARGC * sizeof(char *) );
    
    const char *ptr;
    do {
        // get the index number of first space: "abc de", index = 3;
        ptr = strchr(cmd, ' ');
        if (ptr) {
            // note: may not detect the second space in cmd;
            int index = ptr - cmd;

            args[*argc] = (char *) malloc( (index + 1) * sizeof(char));
            // memset(), fill args[i] with all '\0'
            memset(args[*argc], '\0', sizeof(*args[*argc]) );
            strncpy(args[*argc], cmd, index);
            // add End of string in the end
            /*args[i][index] = '\0';*/
            (*argc)++;

            cmd = cmd + index + 1;
        }

    } while ( *argc < ARGC && ptr );

    // copy last argument to args, since last word don't have space at the end
    args[*argc] = (char *) malloc( (strlen(cmd)+1) * sizeof(char) );
    memset(args[*argc], '\0', sizeof(*args[*argc]) );
    strcpy(args[*argc], cmd);

    return args;
}

void run(int argc, const char **args) {

#ifdef DEBUG
    for(int i = 0; i <= argc; i++) {
        DS(i, args[i]);
    }
#endif

    if ( strcmp(args[0], "cprt") == 0 ) {
        printf("he\n");
    }


}
