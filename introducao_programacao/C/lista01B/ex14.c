/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matricula, dependentes;
    double salario_minimo,salario,imposto,imposto_bruto,imposto_liquido,imposto_total;
    
    scanf("%d %lf %d %lf %lf",&matricula,&salario_minimo,&dependentes,&salario,&imposto);
    
    if(salario > salario_minimo * 12) {
        imposto_bruto = salario * 0.2;
    }
    else if(salario > salario_minimo * 5) {
        imposto_bruto = salario * 0.08;
    }
    else {
        imposto_bruto = 0.0;
    }
    
    imposto_liquido = imposto_bruto - (300 * dependentes);
    imposto_total = imposto_liquido - (salario * (imposto / 100));
    
    printf("MATRICULA = %d\n",matricula);
    printf("IMPOSTO BRUTO = %.2lf\n",imposto_bruto);
    printf("IMPOSTO LIQUIDO = %.2lf\n",imposto_liquido);
    printf("RESULTADO = %.2lf\n",imposto_total);
    if(imposto_total < 0.0) {
        printf("IMPOSTO A RECEBER\n");
    }
    else if(imposto_total > 0.0) {
        printf("IMPOSTO A PAGAR\n");
    }
    else {
        printf("IMPOSTO QUITADO\n");
    }
    return 0;
}
