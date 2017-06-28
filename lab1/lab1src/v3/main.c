// version 3 of z = x + y
// reads the numbers to be added from keyboad
// using the standard I/O library function scanf()
// and outputs the result on the terminal
// using printf()

#include <stdio.h>

int main()
{
int x, y, z;

// original,  read input
  /*scanf("%d %d",&x,&y);*/

printf("%d\n", x);
// Problem 3.2 removing two ampersands
  scanf("%d %d",x,y);

// compute subtraction

  z = x + y;

// print result
  printf("%d plus %d = %d\n", x, y, z);

}
