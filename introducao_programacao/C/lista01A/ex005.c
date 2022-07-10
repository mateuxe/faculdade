#include <stdio.h>
#include <math.h>
 
int main() {
    double altura, arestaHex, volume, areaBase;
 
    scanf("%lf%lf",&altura,&arestaHex);
 
    areaBase = (3.0 * (arestaHex * arestaHex) * sqrt(3.0)) / 2.0;
    volume = 1.0 / 3.0 * areaBase * altura;
 
    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n",volume);
}