#include <stdio.h>

int contar(int n); // funcao para retornar soma

int main()
{
    int n, sum;
    scanf("%d",&n); // entrada
    
    printf("%d = 1", n);
    sum = contar(n); // chamada func

    if(n == sum) {printf(" = %d (NUMERO PERFEITO)",sum);} // verificacao se e perfeito ou nao
    else {printf(" = %d (NUMERO NAO E PERFEITO)",sum);}
    
    return 0;
}

int contar(int n) {
    int i, sum = 1; // variaveis auxiliares

    for(i=2; i<=(n / 2); i++) { // for p/ checar todos os divisores de N
        if(!(n % i)) { // se for divisor de N, executa
            sum += i; // sum acumulando os valores da soma dos divisores
            printf(" + %d",i);
        }
    }
    return sum;
}