// Basic, rudimentary way to track down where in code a run-time error
// occurs. Use fflush() to ensure buffered output is flushed.

#include <stdio.h>

#define MYDEBUG

int main()
{
int x;
void changeval(int *);

  x = 5;
  printf("%d\n",x);

#ifdef MYDEBUG
printf("ok 1\n");
#endif

  changeval(&x);

#ifdef MYDEBUG
printf("ok 2\n");
#endif

  printf("%d\n",x);
  changeval(x);

#ifdef MYDEBUG
printf("ok 3\n");
#endif

  printf("%d\n",x);

}


void changeval(int *a)
{
  *a = 3;
}
