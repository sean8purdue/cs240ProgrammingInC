// example to illustrate different number of arguments: first argument is
// a string as in printf(), counts the number of occurrences of %, and
// checks for type of input: %d, %s, %d, %c

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

main()
{
char r = 'y';
int h = 2;
int myprintf(char *, ...);

  myprintf("%c %d %s %d %f %c", r, h, "hello", 5, 7.2, 'y');

}


int myprintf(char *a, ...)
{
int x;
char *y;
double z;
char m;
va_list arglist;

  va_start(arglist, a);

  while(*a != '\0') {
	if (*a == '%') {
	  switch (*(a+1)) {
		case 'd':
			x = va_arg(arglist, int);
			printf("%d\n", x);			
			break;
		case 's':
			y = va_arg(arglist, char *);
			printf("%s\n", y);			
			break;
		case 'f':
			z = va_arg(arglist, double);
			printf("%f\n", z);			
			break;
		case 'c':
			m = va_arg(arglist, int);
//			printf("%c\n", m);			
			write(1, &m, 1);
			break;
		default:
			continue;
	  }
	}
	a++;
  }

  va_end(arglist);

}
