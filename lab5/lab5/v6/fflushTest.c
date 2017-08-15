#include <stdio.h>

int main(void) {

char a[5];
int *b;

  a[0] = 'h';
  a[1] = 'i';
  a[2] = '\0';

  printf("%s", a);
fflush(stdout);

  *b = 10;

}
