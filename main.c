#include "f2c.h"

int main(char argc, char *argv[])
{
  int i;
  double fahr, celsius;
  double lower, upper, step;

  // default input
  lower = 0;
  upper = 300;
  step  = 20;


  // command line input
  for (i = 0; i <  argc; i++)
  {
    if (!strcmp("-h", argv[i])){
      printf("HELP: output fahrenheit to celsius\n");
      printf("usage: f2c -l <lower> -u <upper> -s <step>\n\n");
      return 0;
    }

    if (!strcmp("-l", argv[i])){
      printf("start: ");
      puts(argv[i+1]);
      lower = upper = atof(argv[i+1]);
    }

    if (!strcmp("-u", argv[i])){
      printf("end: ");
      puts(argv[i+1]);
      upper = atof(argv[i+1]);
    }
    if (!strcmp("-s", argv[i])){
      printf("step: ");
      puts(argv[i+1]);
      step = atof(argv[i+1]);
    }
  }

  // Compute & print F C
  fahr = lower;
  while (fahr <= upper){
    celsius = 5. * (fahr-32) / 9.;
    printf("% 8.2f\t% 8.2f\n", fahr, celsius);
    fahr = fahr + step;
  }



  return 0;
}
