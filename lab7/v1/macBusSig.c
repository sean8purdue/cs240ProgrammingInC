// signal handler example to catch SIGSEGV

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>


int main() {

void my_segv_handler(int);
int *y;
void my_int_handler(int);

  printf("main: %d\n", getpid());

  // register signal handler for CTRL-C with OS
  if (signal(SIGSEGV, my_int_handler) == SIG_ERR) {
	fprintf(stderr, "signal handler registration failed\n");
	exit(1);
  }

  if (signal(SIGBUS, my_int_handler) == SIG_ERR) {
	fprintf(stderr, "signal handler registration failed\n");
	exit(1);
  }

  // register signal handler my_segv_handler() with OS
  /*signal(SIGSEGV, &my_segv_handler);*/

  fprintf(stderr, "in main signal handler \n");
  *y = 5;
  fprintf(stderr, "2 in main signal handler \n");

}

void my_int_handler(int sigval)
{

  /*if (sigval == SIGSEGV) {*/
  if (sigval == SIGBUS) {
  /*fprintf(stderr, "in handler signal handler \n");*/
    printf("CTRL-C won't do\n");
    while(1);
   
	return;
  }

  return;

}

// signal handler catches segmentation fault interrupts
void my_segv_handler(int sigval)
{

  if (sigval == SIGSEGV) {
	printf("my process is accessing memory it shouldn't\n");
	printf("my_segv_handler: %d\n", getpid());
	while(1);
  }

}
