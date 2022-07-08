#include <stdio.h>

int main()
{
    int matricula;
    double horas, sHoras,salario;

    scanf("%d%lf%lf",&matricula,&horas,&sHoras);
    getchar();
    
    while (matricula != 0 && horas != 0) {
        salario = sHoras * horas;
        
        printf("%d %.2lf\n",matricula,salario);
        scanf("%d%lf%lf",&matricula,&horas,&sHoras);
        getchar();
    }
    
    return 0;
}
