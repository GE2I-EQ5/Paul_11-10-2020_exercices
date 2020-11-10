//exo2

#include <stdio.h>

int main()
{
  int a,b,c;
  a = 3;
  b = 4;
  c = 5;

  if(a>b && a>c)
  {
    printf("a est plus grand");
  }
  else if (b>a && b>c)
  {
    printf("b est plus grand");
  }
  else
  {
    printf("c est plus grand");
  }

  return 0;
}
