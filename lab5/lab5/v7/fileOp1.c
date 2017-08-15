// malloc() example involving 2-D tables

#include <stdio.h>
#include <stdlib.h>

int main() {

FILE *fp;
int mx, my;
int **twod;
int i, j;

  fp = fopen("test1.dat","r");
  if(fp == NULL) {
	fprintf(stderr,"file test.dat does not exist\n");
	exit(1);
  }

  // read the size of 2-d table
  fscanf(fp, "%d %d", &mx, &my);

  // allocate space for pointers for mx rows
  twod = (int **) malloc(mx * sizeof(int *));
  if(twod == NULL) {
	fprintf(stderr,"malloc failed\n");
	exit(1);
  }

  // for each row, allocate space for my integers
  for(i=0; i<mx; i++)
	*(twod + i) = (int *) malloc(my * sizeof(int));

  for(i=0; i<mx; i++)
  	for(j=0; j<my; j++)
	  fscanf(fp, "%d", &twod[i][j]);

  for(i=0; i<mx; i++)
  	for(j=0; j<my; j++)
	  printf("%d\n", twod[i][j]);

}
