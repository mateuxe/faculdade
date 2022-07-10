/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int number,dia,mes,ano;
    scanf("%d",&number);
    
    dia = number / 1000000;
    mes = (number / 10000) % 100;
    ano = number % 10000;

    switch(mes) {
        case 1:
            if(dia <= 0 || dia > 31)
                printf("Data invalida!\n");
            else
                printf("%d de janeiro de %d\n",dia,ano);
            break;
        case 2:
            if(dia <= 0 || dia > 28)
                printf("Data invalida!\n");
            else
                printf("%d de fevereiro de %d\n",dia,ano);
            break;
        case 3:
            if(dia <= 0 || dia > 31)
                printf("Data invalida!\n");
            else
                printf("%d de março de %d\n",dia,ano);
            break;
        case 4:
            if(dia <= 0 || dia > 30)
                printf("Data invalida!\n");
            else
                printf("%d de abril de %d\n",dia,ano);
            break;
        case 5:
             if(dia <= 0 || dia > 31)
                printf("Data invalida!\n");
            else
                printf("%d de maio de %d\n",dia,ano);
            break;
        case 6:
            if(dia <= 0 || dia > 30)
                printf("Data invalida!\n");
            else
                printf("%d de junho de %d\n",dia,ano);
            break;
        case 7:
            if(dia <= 0 || dia > 31)
                printf("Data invalida!\n");
            else
                printf("%d de julho de %d\n",dia,ano);
            break;
        case 8:
            if(dia <= 0 || dia > 31)
                printf("Data invalida!\n");
            else
                printf("%d de agosto de %d\n",dia,ano);
            break;
        case 9:
            if(dia <= 0 || dia > 30)
                printf("Data invalida!\n");
            else
                printf("%d de setembro de %d\n",dia,ano);
            break;
        case 10:
            if(dia <= 0 || dia > 31)
                printf("Data invalida!\n");
            else
                printf("%d de outubro de %d\n",dia,ano);
            break;
        case 11:
            if(dia <= 0 || dia > 30)
                printf("Data invalida!\n");
            else
                printf("%d de novembro de %d\n",dia,ano);
            break;
        case 12:
            if(dia <= 0 || dia > 31)
                printf("Data invalida!\n");
            else
                printf("%d de dezembro de %d\n",dia,ano);
            break;
        default:
            printf("Data invalida!\n");
    }
    return 0;
}
