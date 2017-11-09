// illustration of union

#include <stdio.h>
#include <stdlib.h>

enum number_type {
  integer,
  single_precision,
  double_precision
};

typedef union number {
  int nint;
  float nfloat;
  double ndouble;
} number_t;


main()
{
enum number_type user_selection;
number_t x, y, z;

  // assume user has selected through GUI what number type
  user_selection = integer;

  switch(user_selection) {
	case integer:
	  scanf("%d %d",&x.nint,&y.nint);
	  z.nint = y.nint / x.nint;
	  printf("%d\n",z.nint);
	  break;
	case single_precision:
	  scanf("%f %f",&x.nfloat,&y.nfloat);
	  z.nfloat = y.nfloat / x.nfloat;
	  printf("%f\n",z.nfloat);
	  break;
	case double_precision:
	  scanf("%lf %lf",&x.ndouble,&y.ndouble);
	  z.ndouble = y.ndouble / x.ndouble;
	  printf("%lf\n",z.ndouble);
	  break;
	default:
	  fprintf(stderr, "invalid selection: something's wrong\n");
	  exit(1);
  }

}
