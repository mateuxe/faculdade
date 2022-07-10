#include <stdio.h>

void imprimirResultado(double notaF, double freq);
int main()
{
    double nota, tf, freq;
    double notaF, mediaP, mediaL;
    int i, matricula, pesoP = 8, pesoL = 5;
    
    while (scanf("%d",&matricula) != -1) {
        if (matricula != -1) {
        
        scanf("%lf", &mediaP);
        for (i = 0; i < 7; i++){
            scanf("%lf",&nota);
            mediaP += nota;
        }
        
        scanf("%lf",&mediaL);
        for (i = 0; i < 4; i++){
            scanf("%lf",&nota);
            mediaL += nota;
        }
        
        scanf("%lf %lf",&tf,&freq);
        
        mediaP /= pesoP;
        mediaL /= pesoL;
        notaF = 0.7 * mediaP + 0.15 * mediaL + 0.15 * tf;
        
        printf("Matricula: %d, Nota Final: %.2lf, ",matricula,notaF);
        imprimirResultado(notaF, freq);
        }
    }
    return 0;
}

void imprimirResultado(double notaF, double freq) {
    if (notaF < 6.0 && freq < 96)
        printf("Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n");
    else if(notaF < 6.0 && freq >= 96)
        printf("Situacao Final: REPROVADO POR NOTA\n");
    else if(notaF >= 6.0 && freq < 96)
        printf("Situacao Final: REPROVADO POR FREQUENCIA\n");
    else 
        printf("Situacao Final: APROVADO\n");
}