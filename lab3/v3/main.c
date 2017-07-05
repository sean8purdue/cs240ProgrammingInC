// static variables: persistence or memory across function calls

#include <stdio.h>

int func1(void);

int main() {
int x;

  x = func1();
  printf("%d\n",x);

  x = func1();
  printf("%d\n",x);

  x = func1();
  printf("%d\n",x);

  return 0;

}


int func1() {
static int a = 1;

  return a++;

}
