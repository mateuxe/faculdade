#include <stdio.h>

int
main ()
{
  int a,b,c,d,e,f,D,Dx,Dy;
  double x,y;
  
  scanf ("%d", &a);
  scanf ("%d", &b);
  scanf ("%d", &c);
  scanf ("%d", &d);
  scanf ("%d", &e);
  scanf ("%d", &f);
  
  D = a * e - b * d;
  Dx = c * e - b * f;
  Dy = a * f - c * d;
  
  x = (double)Dx / D;
  y = (double)Dy / D;
  
  printf ("O VALOR DE X E = %.2lf\n", x);
  printf ("O VALOR DE Y E = %.2lf\n", y);

  return 0;
}
