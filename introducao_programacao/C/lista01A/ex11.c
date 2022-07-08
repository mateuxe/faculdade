#include <stdio.h>

int
main ()
{
  int number, invert;
  int first, second, third;
  scanf ("%d", &number);
  
  first = number / 100;
  second = number / 10 % 10;
  third = number % 10;
  
  invert = third * 100 + second * 10 + first;

  printf ("%d\n", invert);

  return 0;
}