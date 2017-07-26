
int main() {

char a[5];
int *b;

  a[0] = 'h';
  a[1] = 'i';
  a[2] = '\0';

  write(1, a, 3);

  *b = 10;

}
