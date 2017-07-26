// dynamic memory allocation in processes using malloc() 

#include <stdio.h>
#include <stdlib.h>

main() {

int x; 
int *y; 

  x = 10;

  y = (int *) malloc(sizeof(int));

  *y = 20;

  fprintf(stdout,"%d %d\n",x,*y);

}
