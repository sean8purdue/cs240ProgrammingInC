#ifndef DEBUG_H
#define DEBUG_H

#ifdef DEBUG
#define S(s) fprintf(stderr, "%s\n", s)
#define D(d) fprintf(stderr, "%d\n", d)
#define DS(d,s) fprintf(stderr, "%d %s\n", d, s)
#define SDS(s1,d,s2) fprintf(stderr, "%s %d %s\n", s1, d, s2)
#else
#define S(s)
#define D(d)
#define DS(s,d)
#define SDS(s1,d,s2)
#endif

#include <stdlib.h> // exit
extern void error(const char *msg) { perror(msg); exit(2); };

#endif
