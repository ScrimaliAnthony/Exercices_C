#include <stdio.h>

int main()
{
  int c, char_nb;

  char_nb = 0;

  while((c = getchar()) != EOF) {
    ++char_nb;
  }

  printf("le nombre de charactères entrés est: %d\n", char_nb);
  
  return 0;
}
