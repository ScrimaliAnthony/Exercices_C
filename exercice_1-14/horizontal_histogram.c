#include <stdio.h>

#define MAX_NB_WORDS 10

int main()
{
  int c, i, j, nb_char, num_word;
  int nchar[MAX_NB_WORDS];

  nb_char = num_word = 0;
  for(i = 0; i < MAX_NB_WORDS; ++i) {
    nchar[i] = 0;
  }

  while((c = getchar()) != EOF && num_word <= MAX_NB_WORDS) {
    if(c == ' ' || c == '\n' || c == '\t') {
      ++num_word;
    } else {
      ++nchar[num_word];
    }
  }

  for(i = 0; i < MAX_NB_WORDS; ++i) {
    for(j = 0; j < nchar[i]; ++j) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
