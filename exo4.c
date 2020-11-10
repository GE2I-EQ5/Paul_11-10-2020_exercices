#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, delta, x1, x2;
  a = 4;
  b = 3;
  c = 5;
  delta = (powf(delta,2)) - (4*a*c);
  if(delta > 0)
  {
    x1=(-b-sqrtf(delta))/(2*a);
    x2=(-b+sqrtf(delta))/(2*a);
    printf("Delta > 0 : %f", delta);
    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);
  }
  else if(delta = 0)
  {
    x1 = -b/(2*a);
    printf("Delta = 0 : %f", delta);
    printf("x1 = %f\n", x1);
  }
  else
  {
    printf("Delta = 0 : %f (pas de solutions sur R)", delta);
  }
  return 0;
}
