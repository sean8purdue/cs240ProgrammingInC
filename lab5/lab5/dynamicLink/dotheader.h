#ifndef DOTHEADER_H
#define DOTHEADER_H

#include <stdio.h>
#include <math.h>

#define MAXSIZE 50

int read_vectors(int *, float *, float *);
void calc_diff(int, float *, float *, float *);
void calc_power(int, float *, float *, float *);

#endif
