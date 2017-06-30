// Another passing by reference exercise

#include <stdio.h>
#include "main.h"

int main() {
    int x;

    x = 5;
    printf("%d\n",x);
    printf("%p\n",&x);
    changeval(&x);
    printf("%d\n",x);

}
