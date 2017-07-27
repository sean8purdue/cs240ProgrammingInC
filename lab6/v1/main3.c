// example that makes use of command-line arguments

#include <stdio.h>

int main(int argc, char **argv, char **environ)
{
int i;

  while (*environ != NULL) {
	printf("%s\n", *environ);
	environ++;
  }

  return 0;

}
