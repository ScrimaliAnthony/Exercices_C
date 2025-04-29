#include <stdio.h>

int main()
{
  int c, d, blanks;

  blanks = 0;

  while((c = getchar()) != EOF) {
    if(c == ' ' && d == ' ') {
      c = '\0';
      d = ' ';
    } else if(c == ' ') {
      d = ' ';
    } else {
      d = c;
    }
    putchar(c);
  }

  return 0;
}
