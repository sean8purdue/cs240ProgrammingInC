// example to illustrate C structure

#include <stdio.h>
#include <string.h>

struct customer {
  char name[10];
  int age;
  int intern_id;
};

main()
{
struct customer joe;
struct customer sue;

  joe.name[0] = 'j';
  joe.name[1] = 'o';
  joe.name[2] = 'e';
  joe.name[3] = '\0';
  joe.age = 19;
  joe.intern_id = 1200;

  printf("%s\n",joe.name);
  printf("%d\n",joe.age);
  printf("%d\n",joe.intern_id);

  strcpy(sue.name,"sue");
  sue.age = 20;
  sue.intern_id = 50;

  printf("%s\n",sue.name);
  printf("%d\n",sue.age);
  printf("%d\n",sue.intern_id);

}
