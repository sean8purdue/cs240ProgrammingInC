// example to illustrate C structure and typedef

#include <stdio.h>

typedef struct customer {
  char name[10];
  int age;
  int intern_id;
} customer_t;

main()
{
customer_t joe;

  joe.name[0] = 'j';
  joe.name[1] = 'o';
  joe.name[2] = 'e';
  joe.name[3] = '\0';
  joe.age = 19;
  joe.intern_id = 1200;

  printf("%s\n",joe.name);
  printf("%d\n",joe.age);
  printf("%d\n",joe.intern_id);

}
