// simple shell example using fork() and execl()

#include <stdio.h>
#include <unistd.h>

int main()
{
pid_t k;
int status;

  while(1) {

  	fprintf(stdout, "[%d]$ ", getpid());
  	getchar();

  	k = fork();
  	if (k==0) {
  	// child code
	  fprintf(stdout, "I'm the child: %d\n", getpid());
    	  execl("/bin/ls", "/bin/ls", NULL);
  	}
  	else {
  	// parent code 
	  fprintf(stdout, "I'm the parent: %d\n", getpid());
	  waitpid(k, &status, 0);
  	}
  }

}
