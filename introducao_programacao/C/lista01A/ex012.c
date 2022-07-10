/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int valor;
  int cem, cinq, dez, um, resto;
  scanf ("%d", &valor);
  
  cem = valor / 100;
  resto = valor % 100;
  cinq = resto / 50;
  resto %= 50;
  dez = resto / 10;
  um = resto % 10;
  
  printf ("NOTAS DE 100 =  %d\n", cem);
  printf ("NOTAS DE 50 =  %d\n", cinq);
  printf ("NOTAS DE 10 =  %d\n", dez);
  printf ("MOEDAS DE 1 =  %d\n", um);

  return 0;
}
