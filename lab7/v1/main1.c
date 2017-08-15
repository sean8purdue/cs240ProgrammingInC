// signal handler example to catch SIGINT:
// by default: CTRL-C

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
int *y;
void my_int_handler(int);
void my_int_handler2(int);

   int x = 0;

  // register signal handler for CTRL-C with OS
  if (signal(SIGINT, my_int_handler) == SIG_ERR) {
	fprintf(stderr, "signal handler registration failed\n");
	exit(1);
  }

  // program is infinite loop
  scanf("%d", &x);
  while (x == 1)
      scanf("%d", &x);

  if (signal(SIGINT, my_int_handler2) == SIG_ERR) {
	fprintf(stderr, "signal handler2 registration failed\n");
	exit(1);
  }
  printf("second hanlder\n");
  while(1);

}


// signal handler my_int_handler() catches CTRL-C key input

void my_int_handler(int sigval)
{

  if (sigval == SIGINT) {
	printf("CTRL-C won't do\n");
	return;
  }

  return;

}

void my_int_handler2(int sigval)
{

  if (sigval == SIGINT) {
	printf("handler2: CTRL-C won't do\n");
	return;
  }

  return;

}
