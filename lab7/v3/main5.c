// example to illustrate different number of arguments: first argument is
// a string as in printf() and different argument types

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

main()
{
int mysum(char *, ...);
int res;

  res = mysum("abc", 2, "2", 1);
  printf("result = %d\n", res);

}


int mysum(char *a, ...)
{
int sum = 0, i; 
int cnt;
char *s;
va_list arglist;

  va_start(arglist, a);
  cnt = strlen(a);

  for (i=0; i<cnt; i++) {
	if (i == 1) {
	  s = va_arg(arglist, char *);
	  sum += atoi(s);
	}
	else
	  sum += va_arg(arglist, int);
  }

  va_end(arglist);

  return sum;

}
