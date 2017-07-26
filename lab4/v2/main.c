// Usefulness of system() utility function.

#include <stdio.h>
#include <stdlib.h>

#define FULLPATHHOSTNAME "/usr/bin/host www.cs.purdue.edu"

int main() {

    char fullpathhostname[] = FULLPATHHOSTNAME;

    system("/usr/bin/host www.cs.purdue.edu");
    system(FULLPATHHOSTNAME);
    system(fullpathhostname);

    fullpathhostname[0] = 'l';
    fullpathhostname[1] = 's';
    fullpathhostname[2] = ' ';
    fullpathhostname[3] = '-';
    fullpathhostname[4] = 'l';
    fullpathhostname[5] = '\0';

    system(fullpathhostname);
}
