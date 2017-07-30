#include <stdio.h>
#include <string.h>

#define PROMPT 10
#define CMD 100
#define ARGC 20

void getCmd(char *);
void lexer(char *, char **);

int main() {
    char promt[PROMPT];
    char cmd[CMD];
    char args[ARGC][CMD];

    strcpy(promt, "$ ");
    /*printf("%s\n", promt);*/

    while (1) {
        printf("%s ", promt);

        // get user input string with getchar
        getCmd(cmd);
        printf("%s\n", cmd);
        /*lexer(cmd, (char **)args);*/

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

void lexer(char *cmd, char **args) {
    int i = 0;
    char arg[CMD] = "";

    //char *ptr also works
    /*char *ptr = strchr(cmd, ' ');*/
    const char *ptr = strchr(cmd, ' ');
    if (ptr) {
        // note: may not detect the second space in cmd;
        int index = ptr - cmd;
        printf("%d\n", index);

        /*strncpy( (*args+i), cmd, 3);*/
        strncpy(arg, cmd, index);
        printf("%s\n", arg);
        fflush(stdout);

        cmd = cmd + index + 1;
        printf("%s\n", cmd);
        
        

    }

}
