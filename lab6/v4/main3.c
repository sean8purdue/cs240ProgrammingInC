// example to illustrate C structure and member malloc()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct customer {
  char *name;
  int age;
  int intern_id;
} customer_t;

main()
{
customer_t joe;

  joe.name = (char *) malloc(10*sizeof(char));
  strcpy(joe.name,"joe");

  joe.age = 19;
  joe.intern_id = 1200;

  printf("%s\n",joe.name);
  printf("%d\n",joe.age);
  printf("%d\n",joe.intern_id);

}

