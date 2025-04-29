#include <stdio.h>

int main()
{
  int c, blanks, tabs, newlines;

  blanks = 0;
  tabs = 0;
  newlines = 0;

  while((c = getchar()) != EOF) {
    if(c ==  ' ') {
      ++blanks;
    } else if (c == '\t') {
      ++tabs;
    } else if (c == '\n') {
      ++newlines;
    }
  }
  printf("\nLe nombre d'espace est: %d\nLe nombre de tabulation est: %d\nLe nombre de retour à la ligne est: %d\n", blanks, tabs, newlines);

  return 0;
}
