/* 	version 6 of z = x + y
	same as version 5 but puts myadd()
	in a separate file, myadd.c */ 

#include <stdio.h>
#include "myheader.h"

int main() 
{
float x, y, z;

// read input
  scanf("%f %f",&x,&y);

// compute addition
  z = myadd(x,y);

// print result
  printf("result of %f plus %f is %.2f\n", x, y, z);

}
