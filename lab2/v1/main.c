// Program to illustrate content vs. address
// of a local variable.

#include <stdio.h>

int main()
{
int s;

  s = 5;
  printf("%d\n",s);
  // format %p is for printing address (i.e., pointer)
  printf("%p\n",&s);

}
