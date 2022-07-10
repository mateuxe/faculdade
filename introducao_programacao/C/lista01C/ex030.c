#include <stdio.h>

void calcularFat(int number);

int main()
{
    int n;
    
    while(scanf("%d",&n) != EOF) {
        if(n <= 0) {
            printf("Fatoracao nao e possivel para o numero %d!\n",n);
        } else {
            calcularFat(n);
        }
    }
    return 0;
}

void calcularFat(int number) {
    int fator = 2;
    printf("%d = ", number);
    
    while (number != 1) {
        if (!(number % fator)) {
            printf("%d", fator);
            number /= fator;
            
            if(number == 1) {
                printf("\n");
            } else {
                printf(" x ");
            }
        } else {
            fator++;
        }  
    }
}