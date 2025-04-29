#include <stdio.h>

int main()
{
  int eof;

  eof = (getchar() != EOF);
  printf("%d\n", eof);
  return 0;
}
