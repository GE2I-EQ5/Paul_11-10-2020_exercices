//exo crédit étudiant
#include <stdio.h>
#include <math.h>

int main()
{
  float c, n, t, m;

  c = 3000;
  n = 12;
  t = 0.05;

  m = (c*t/12)/(1-powf((1+t/12),-n));

  printf("m vaut : %f\n", m);

  return 0;
}
