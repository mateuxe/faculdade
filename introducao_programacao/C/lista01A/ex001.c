#include <stdio.h>
#include <math.h>
 
int main() {
    double salario_minimo, consumo_kw, valor_kw, gasto_residencial, desc10;
    scanf("%lf",&salario_minimo);
    scanf("%lf",&consumo_kw);
 
    // 100kW = 70% do salário mínimo
    valor_kw = salario_minimo * 0.7 / 100; // valor de cada kW
    gasto_residencial = valor_kw * consumo_kw; // Gasto kW na residencia
    desc10 = gasto_residencial * 0.9; // Desconto de 10%
 
    printf("Custo por kW: R$ %.2lf\n",valor_kw);
    printf("Custo do consumo: R$ %.2lf\n",gasto_residencial);
    printf("Custo com desconto: R$ %.2lf\n",desc10);
 
    return 0;
}