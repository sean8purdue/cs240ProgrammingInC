// signal handler example to catch SIGSEGV

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>


int main() {

void my_segv_handler(int);
int *y;

  printf("main: %d\n", getpid());

  // register signal handler my_segv_handler() with OS
  /*signal(SIGSEGV, &my_segv_handler);*/
  signal(SIGBUS, &my_segv_handler);

  printf("1 main: %d\n", getpid());
  *y = 5;
  printf("2 main: %d\n", getpid());

}


// signal handler catches segmentation fault interrupts

void my_segv_handler(int sigval)
{

  if (sigval == SIGBUS) {
	printf("my process is accessing memory it shouldn't\n");
	printf("my_segv_handler: %d\n", getpid());
	while(1);
	printf("1 my_segv_handler: %d\n", getpid());
  }

}
