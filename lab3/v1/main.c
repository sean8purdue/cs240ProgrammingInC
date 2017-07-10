/* 2-D arrays viewed as pointers to pointers. */

#include <stdio.h>

void main()
{
int i, j;
int A[3][3];

// initialize 2-D array

  for (i=0; i<3; i++)
	for (j=0; j<3; j++)
	  A[i][j] = i + 10 * j;

// print 2-D array
  for (i=0; i<3; i++)
	for (j=0; j<3; j++)
	  if (j != 2)
	  	printf("A[%d][%d] = %d  ", i, j, A[i][j]);
	  else
	  	printf("A[%d][%d] = %d\n", i, j, A[i][j]);

  printf("%d\n", **A);
  printf("%d\n", *((*A)+1));
  printf("%d\n", *(*A+2));
  printf("%d\n", **(A+1));
  printf("%d\n", **(A+2));

}
