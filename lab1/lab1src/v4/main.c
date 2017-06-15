/* 	version 4 of z = x + y
	same as version 3 but adds support
	for real numbers */

#include <stdio.h>

main()
{
float x, y, z;

// read input
  scanf("%f %f",&x,&y);

// compute addition
  z = x + y;

// print result
  printf("result of %f + %f = %f\n", x, y, z);

}
