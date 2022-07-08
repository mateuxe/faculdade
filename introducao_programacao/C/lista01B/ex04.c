/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
    int horas;
    double taxa;
    
    scanf("%d",&horas);
    
    if(horas >= 3 && horas % 3 == 0) {
        taxa = (horas / 3) * 10;
    } else {
        if(horas >= 3 && horas % 3 != 0) {
            taxa = ((horas / 3) * 10) + (horas % 3) * 5;
        } else {
            taxa = horas * 5;
        }
    }
    printf("O VALOR A PAGAR E = %.2lf\n",taxa);
  return 0;
}
