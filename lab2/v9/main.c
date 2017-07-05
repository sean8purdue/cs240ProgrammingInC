// Pointers, program memory, and silent run-time errors.
// Good programming practice.

#include <stdio.h>

int main() {
    int i;
    int a[5];

    int len = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < len; i++) {
        a[i] = i;
        printf("%d\n",*(a+i));
    }
    printf("\n");

  /*for(i=0; i<5; i++)*/
	/*a[i] = i;*/

  /*for(i=0; i<5; i++)*/
      /*printf("%d\n",*(a+i));*/

  // silent run-time error
  /*for(i=0; i<6; i++)*/
  for(i=0; i<7; i++)
	a[i] = i;

  for(i=0; i<7; i++)
	printf("%d\n",*(a+i));

}
