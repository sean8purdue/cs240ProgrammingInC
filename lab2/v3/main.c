// Another passing by reference exercise

#include <stdio.h>

void changeval(int *);

int main()
{
int x;

  x = 5;
  printf("%d\n",x);
  printf("%p\n",&x);
  changeval(&x);
  printf("%d\n",x);

}


void changeval(int *a)
{
  printf("%p\n",a);
  *a = 3;
}
