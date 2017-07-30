#ifndef DEBUG_H
#define DEBUG_H

#ifdef DEBUG
#define DPRINTS(s) fprintf(stderr, "%s\n", s)
#define DPRINTD(d) fprintf(stderr, "%d\n", d)
#else
#define DPRINTS(s)
#define DPRINTD(d)
#endif

#include <stdlib.h> // exit
extern void error(const char *msg) { perror(msg); exit(2); };

#endif
