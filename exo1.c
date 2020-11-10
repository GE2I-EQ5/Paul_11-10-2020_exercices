//exo1
#include <stdio.h>
#include <math.h>

int main()
{
  float x,rx;

  x = 2;

  if(x > 0)
  {
    rx = sqrt(x);
    printf("Le nombre est positif, sa racine est : %f", rx);
  }
  else
  {
    printf("Nombre négatif : %f", x);
  }
  return 0;
}
