// illustration of enum

#include <stdio.h>
#include <stdlib.h>

typedef enum Sports {football, tennis, soccer, golf, basketball} Sports_t;

main()
{
Sports_t user_input;

  // assume user has selected through GUI what sport
  user_input = soccer;

  switch(user_input) {
	case football:
	  printf("channels 5000, 5002, 5005, 6001\n");
	  break;
	case tennis:
	  printf("channels 2000, 2002\n");
	  break;
	case soccer:
	  printf("no channels\n");
	  break;
	case golf:
	  printf("channel 3050\n");
	  break;
	case basketball:
	  printf("channels 3600, 3604, 3608\n");
	  break;
	default:
	  fprintf(stderr, "invalid selection: something's wrong\n");
	  exit(1);
  }

}
