/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  float a,b,c, media;
  
  scanf ("%f%f%f",&a,&b,&c);
  
  media = (a + b + c) / 3.0;
  
  printf("MEDIA = %.2f\n",media);
  if (media >= 6.0)
    printf("APROVADO\n");
  else 
    printf("REPROVADO\n");
    
  return 0;
}
