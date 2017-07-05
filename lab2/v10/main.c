// Basic string processing.

#include <stdio.h>
#include <string.h>

int main()
{
int i;
char a[6]; 

  a[0] = 'a';
  a[1] = 'b';
  a[2] = '\0';
  a[3] = 'd';
  a[4] = 'e';
  a[5] = '\0';

  printf("%s\n",a);

  //strcpy()
  strcpy(a, "abcde");
  printf("%s\n",a);

  // try to store "abcdef" in a[6], seg fault
  /*strcpy(a, "abcdef");*/
  /*printf("%s\n",a);*/
  

}
