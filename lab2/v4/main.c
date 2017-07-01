// Using pointers (i.e., variables that contain addresses) directly in
// a program.

#include <stdio.h>

int main() {
    int x;
    int *y;

    x = 5;
    printf("x = %d\n",x);
    printf("&x = %p\n",&x);
    printf("\n");

    y = &x;
    printf("*y = %d\n",*y);
    printf("y = %p\n",y);
    printf("&y = %p\n",&y);
    printf("\n");

    int **z;
    z = &y;
    printf("z =  &y = %p\n", z);
    printf("*z = y = %p\n", *z);
    printf("**z = %d\n",**z);
}
