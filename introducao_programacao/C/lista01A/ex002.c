#include <stdio.h>
#include <math.h>
 
int main() {
    double fahrenheit, pol; // Entrada
    double celsius, milim; // Auxiliares
 
    scanf("%lf",&fahrenheit);
    scanf("%lf",&pol);
 
    celsius = (5 * (fahrenheit - 32)) / 9;
    milim = pol * 25.4;
 
    printf("O VALOR EM CELSIUS = %.2f\n",celsius);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n",milim);
 
    return 0;
}