// Use functions changeval1() and changeval2() to illustrate
// passing by value vs. reference. 

#include <stdio.h>

void main()
{
int s;
void changeval1(int);
// void changeval2(int *);

  s = 5;

  changeval1(s);
  printf("%d\n",s);

//  changeval2(&s);
//  printf("%d\n",s);

}


void changeval1(int a)
{
  a = 3;
}


void changeval2(int *a)
{
  *a = 3;
}
