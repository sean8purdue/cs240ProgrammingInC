// Pointers and arrays

#include <stdio.h>

int main()
{
int s[3];

  s[0] = 10;
  s[1] = 20;
  s[2] = 30;

  printf("%d\n",s[0]);
  printf("%d\n",s[1]);
  printf("%d\n",s[2]);

  printf("%d\n",*s);
  printf("%d\n",*(s+1));
  printf("%d\n",*(s+2));

  *s = 1000;
  *(s+1) = 2000;
  *(s+2) = 3000;

  printf("%d\n",*s);
  printf("%d\n",*(s+1));
  printf("%d\n",*(s+2));

}
