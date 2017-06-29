// C++ is a superset of C with OO (objective oriented) extensions.
// However, there are subtle differences that must be taken into account
// when porting C code.

#include <stdio.h>

int main()
{
int x;
void changeval(int &);

  x = 5;
  printf("%d\n",x);
  changeval(x);
  printf("%d\n",x);

}


void changeval(int &a)
{
  a = 3;
}
