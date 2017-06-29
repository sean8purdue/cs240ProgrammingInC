/* 	version 5 of z = x + y
	same as version 4 but uses separate
	function myadd() to perform addition */ 

#include <stdio.h>

float myadd(float *, float *);

int main() 
{
float x, y, z;

// read input
  scanf("%f %f",&x,&y);

// compute addition
  z = myadd(&x, &y);

// print result
  printf("result of %f + %f = %.2f\n", x, y, z);

}


/*	function myadd(a,b) takes two
	arguments of type float, adds them and
	returns the result to the calling
	function */

float myadd(float *a, float *b)
{
float c;

// add argument a to argument b
// and store the result in local variable c
  c = *a + *b;

  return c;
}
