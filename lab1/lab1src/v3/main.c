// version 3 of z = x + y
// reads the numbers to be added from keyboad
// using the standard I/O library function scanf()
// and outputs the result on the terminal
// using printf()

#include <stdio.h>

main()
{
int x, y, z;

// read input
  scanf("%d %d",&x,&y);

// compute subtraction
  z = x + y;

// print result
  printf("%d plus %d = %d\n", x, y, z);

}
