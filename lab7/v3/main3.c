// example to illustrate different number of arguments

#include <stdio.h>
#include <stdarg.h>

int mysum(int, ...);

main()
{
int res;

  res = mysum(4, 2, 2, 1, 5);
  printf("result = %d\n", res);

}


int mysum(int a, ...)
{
int sum = 0; 
int i;
va_list arglist;

  va_start(arglist, a);

  for (i=0; i<a; i++)
	sum = sum + va_arg(arglist, int);

  va_end(arglist);

  return sum;

}
