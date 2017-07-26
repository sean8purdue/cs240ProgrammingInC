// A forking example to illustrate sharing between parent and child processes

#include <stdio.h>
#include <unistd.h>

int a;

main()
{
pid_t mypid;
void letsfork(void);

  a = 10;
  mypid = getpid();
  printf("I am the parent: pid=%d  a=%d\n", mypid, a);

  letsfork();
  mypid = getpid();
  // track the value of a
  a++;
  printf("who am I: pid=%d  a=%d\n", mypid, a);

}


// Perform fork() from a function called by main()

void letsfork()
{
pid_t mypid, pidafterfork;
static int b;

  b = 100;
  mypid = getpid();
  printf("inside letsfork before calling fork(): pid=%d  b=%d\n", mypid, b);

  pidafterfork = fork();

  // track the value of b
  if (pidafterfork == 0) {	// I'm the child process!
	b++;
	printf("inside letsfork I'm the child: pid=%d  b=%d\n",getpid(),b);
  }
  else {			// I'm the parent process
	b++;
	printf("inside letsfork I'm the parent: pid=%d  b=%d\n",getpid(),b);
  }

}
