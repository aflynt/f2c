#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAXCHARS 80

int header(void);
int parseArgs(char argc, char *argv[], double *lower, double *upper, double *step);
int solicit_ppl(void);
int prn_result(double n1, double n2);
int getJoyNum(void);
int prnJoy(int opt);
