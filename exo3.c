//exo3

#include <stdio.h>
#include <math.h>

int main()
{
  int i;
  long somme = 0;

  for (i=0; i < 100; i++)
  {
    somme += i;
  }
  printf("%ld\n", somme);

  return 0;
}
