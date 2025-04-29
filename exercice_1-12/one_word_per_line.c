#include <stdio.h>

int main()
{
  int c, nl;

  while((c = getchar()) != EOF) {
    if(c == ' ' || c == '\t') {
      c = '\n';
    }
    putchar(c);
  }

  return 0;
}
