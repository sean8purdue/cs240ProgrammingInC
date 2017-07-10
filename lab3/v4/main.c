// Pointers of functions and passing them as arguments.

#include <stdio.h>

int twice(int);
int runfunc(int (*g)(), int);

int main()
{
int x, y;
int (*f)(int);

  x = 3;
  y = twice(x);
  printf("result = %d\n",y);

  f = &twice;
  x = 4;
  y = (*f)(x);
  printf("result = %d\n",y);

  x = 5;
  y = runfunc(&twice, x);
  printf("result = %d\n",y);

}


// multiply by 2

int twice(int a)
{
  return 2*a;
}


// run function with a single argument

int runfunc(int (*h)(), int a)
{
int b;

  b = (*h)(a);
  return b;

}
