// Pointers, program memory, and silent run-time errors.
// Good programming practice.

#include <stdio.h>

int main()
{
int i;
int a[5];

  for(i=0; i<5; i++)
	a[i] = i;

  for(i=0; i<5; i++)
  	printf("%d\n",*(a+i));

  for(i=0; i<6; i++)
	a[i] = i;

  for(i=0; i<6; i++)
	printf("%d\n",*(a+i));

}
