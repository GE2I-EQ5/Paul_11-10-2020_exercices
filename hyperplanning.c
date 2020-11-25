//exo hyperplanning

#include <stdio.h>
#include <math.h>

int main()
{
  int estBissextile;
  int annee = 1900;

  if( (annee%4 == 0 && annee%100 !=0) || (annee%4 == 0 && annee%100 == 0 && annee%400 == 0) )
  {
    printf("Annee bissextile");
  }

  else
  {
    printf("Pas bissextile");
  }

  return 0;
}
