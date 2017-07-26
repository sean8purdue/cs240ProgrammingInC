// simple shell example using fork() and execlp()

#include <stdio.h>
#include <unistd.h>

main()
{
pid_t k;
char buf[100];
int status;
int len;

  while(1) {

  	fprintf(stdout,"%d> ",getpid());
	fscanf(stdin,"%s",buf);

  	k = fork();
  	if (k==0) {
  	// child code
    	  execlp(buf,buf,NULL);
  	}
  	else {
  	// parent code 
	  waitpid(k, &status, 0);
  	}
  }
}
