#include "f2c.h"

int main(char argc, char *argv[])
{
  double fahr, celsius;

  // default input
  double lower = 0;
  double upper = 300;
  double step  = 20;

  parseArgs(argc, argv, &lower, &upper, &step);

  header();
  // Compute & print F C
  fahr = lower;
  while (fahr <= upper){
    celsius = 5. * (fahr-32) / 9.;
    printf("% 8.2f\t% 8.2f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}
