#include <stdio.h>
#include <string.h>

#define PROMPT 10
#define CMD 100

void getCmd(char *);

int main() {
    char promt[PROMPT];
    char cmd[CMD];

    void functionScope();

    strcpy(promt, "$ ");
    /*printf("%s\n", promt);*/

    functionScope();

    while (1) {
        printf("%s ", promt);

        // get user input string with getchar
        getCmd(cmd);
        printf("%s\n", cmd);

    }


    
}

void getCmd(char *cmd) {
    char c;
    int i = 0;

    // error
    /*functionScope();*/

    while ( (c = getchar()) != '\n' && (i < (CMD-1))   ) {
        cmd[i++] = c; 
    }
    cmd[i] = '\0';
}
void functionScope() {
    printf("function scope test\n");
}
