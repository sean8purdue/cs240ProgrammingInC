// dynamic memory allocation in processes using malloc() 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
char b[100];
char s[100];
int n;
int *x; 

  x = (int *) malloc(10000000 * sizeof(int));

  n = getpid();
  sprintf(b, "%d", n); 		// convert integer to string
  printf("pid: %s\n", b);

  s[0] = 'p';
  s[1] = 'm';
  s[2] = 'a';
  s[3] = 'p';
  s[4] = ' ';
  s[5] = '\0';
  strcat(s, b);
  printf("command: %s\n", s);

  system(s);


  free(x);
  system(s);

  x = (int *) malloc(10000000 * sizeof(int));
  system(s);

  x = (int *) malloc(10000000 * sizeof(int));
  system(s);

/*
 */

}
