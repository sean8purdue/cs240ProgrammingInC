#include <stdio.h>

#include "functionheader.h"

void abc(void) {
int i, x, y, z, a[5];

  x = 5;
  y = 6;
  z = 7;
  for(i=0; i<5; i++)
	a[i] = -99; 
  printf("x = %d y = %d z = %d\n", x, y, z);
  return;

}
