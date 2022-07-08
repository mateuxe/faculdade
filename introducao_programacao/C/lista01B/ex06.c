#include <stdio.h>

int
main ()
{
    double salario, reajuste;
    
    scanf("%lf",&salario);
    
    if(salario <= 300) {
        reajuste = salario * 0.5;
        salario += reajuste;
    } else {
        reajuste = salario * 0.3;
        salario += reajuste;
    }
    
    printf("SALARIO COM REAJUSTE = %.2lf\n",salario);
  return 0;
}
