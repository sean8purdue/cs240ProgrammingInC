// copy ascii file: file names given as command-line arguments
// similar to: cp <filename1> <filename2>

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
FILE *fp1, *fp2;
char c;

  // open file to be copied from
  fp1 = fopen(argv[1],"r");
  if(fp1 == NULL) {
        fprintf(stderr,"file %s does not exist\n", argv[1]);
        exit(1);
  }

  // create file to be copied to
  fp2 = fopen(argv[2],"w");
  if(fp2 == NULL) {
        fprintf(stderr,"file %s could be created\n", argv[2]);
        exit(1);
  }

  while((c = fgetc(fp1)) != EOF)
	fputc(c, fp2);

  return 0;

}
