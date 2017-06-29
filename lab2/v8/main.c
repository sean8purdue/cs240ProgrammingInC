// Pointers and arrays

#include <stdio.h>

void main()
{
int *h;

  *h = 100;
  *(h+1) = 200;
  *(h+2) = 300;

  printf("%d\n",*h);
  printf("%d\n",*(h+1));
  printf("%d\n",*(h+2));

}
