// Pointers and arrays

#include <stdio.h>
#include <stdlib.h>

int main()
{
int *h;

    printf("&h = %p, h = %p\n", &h, h);

    h = (int *) malloc(3 * sizeof(int));
    /*h = malloc(3 * sizeof(int));*/
  *h = 100;
  *(h+1) = 200;
  *(h+2) = 300;

  printf("%d\n",*h);
  printf("%d\n",*(h+1));
  printf("%d\n",*(h+2));

}
