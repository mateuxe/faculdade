#include <stdio.h>
#include <math.h>

int main()
{
    double massa, aceleracao, tempo;
    double velocidade, espaco, trabalho;
    
    scanf("%lf",&massa);
    scanf("%lf",&aceleracao);
    scanf("%lf",&tempo);

    velocidade = aceleracao * tempo;
    espaco = (aceleracao * pow(tempo,2)) / 2.0;
    trabalho = (massa * 1000) * pow(velocidade,2) / 2;
    
    printf("VELOCIDADE = %.2lf\n",velocidade * 3.6);
    printf("ESPACO PERCORRIDO = %.2lf\n",espaco);
    printf("TRABALHO REALIZADO = %.2lf\n",trabalho);
    return 0;
}
