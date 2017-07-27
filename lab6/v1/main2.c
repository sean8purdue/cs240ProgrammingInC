// example that makes use of command-line arguments

#include <stdio.h>
#include <unistd.h>

int main()
{
int i;

  fprintf(stdout,"I'm a.out\n");
  fflush(stdout);

  execlp("myargprint", "myargprint", "10", "20", "-a", "-b", NULL);

  return 0;

}
