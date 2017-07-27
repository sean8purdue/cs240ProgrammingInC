// example to illustrate C structure and member malloc()

#include <stdio.h>
#include <stdlib.h>

typedef struct customer {
  char name[10];
  int age;
  int intern_id;
} customer_t;

main()
{
customer_t *joe;

  joe = (customer_t *) malloc(sizeof(customer_t));
  joe->name[0] = 'j';
  joe->name[1] = 'o';
  joe->name[2] = 'e';
  joe->name[3] = '\0';

  joe->age = 19;
  joe->intern_id = 1200;

  printf("%s\n",joe->name);
  printf("%d\n",joe->age);
  printf("%d\n",joe->intern_id);

}

