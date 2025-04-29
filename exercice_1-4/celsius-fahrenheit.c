#include <stdio.h>

/* Celsius to Fahrenheit table */

int main()
{
  float cels, fahr;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  cels = lower;
  printf("|------|--------|\n| cels | fahr   |\n|------|--------|\n");
  while (cels <= upper) {
    fahr = ((9.0 / 5.0) * cels) + 32;
    printf("| %4.0f | %6.1f |\n", cels, fahr);
    cels = cels + step;
    }
  return 0;
}
