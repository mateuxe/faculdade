#include <stdio.h>
#include <math.h>
 
int main() {
    double raio, altura_lata; //Entrada
    double pi=3.14159, areaBase, areaLateral, areaTotal, custo; //Auxiliares
 
    scanf("%lf",&raio);
    scanf("%lf",&altura_lata);
 
    areaBase = pi * pow(raio,2);
    areaLateral = 2 * pi  * raio * altura_lata;
    areaTotal = 2 * areaBase + areaLateral;
    custo = areaTotal * 100;
 
    printf("O VALOR DO CUSTO E = %.2lf\n", custo);
    return 0;
}
×