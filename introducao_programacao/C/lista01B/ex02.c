
#include <stdio.h>

int
main ()
{
    int conta;
    double consumo, valor;
    char consumidor;
    
    scanf("%d %lf %c",&conta,&consumo,&consumidor);

    if(consumidor == 'R') {
        valor = 5.0 + 0.05 * consumo;
    } else { 
        if(consumidor == 'C') {
          valor = 500 + (consumo - 80) * 0.25;  
        } else { 
          valor = 800 + (consumo - 100) * 0.04;  
        }
    }
    
    printf("CONTA = %d\n",conta);
    printf("VALOR DA CONTA = %.2lf\n",valor);
  return 0;
}
