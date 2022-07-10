#include <stdio.h>
#include <math.h>
 
int main() {
    double precoBruto, percDistr, percImpos, valor;
 
    scanf("%lf",&precoBruto);
    scanf("%lf",&percDistr);
    scanf("%lf",&percImpos);
 
    valor = precoBruto + (percDistr * precoBruto / 100) + (percImpos * precoBruto / 100);
    
    printf("O VALOR DO CARRO E = %.2lf\n", valor);
    return 0;
}