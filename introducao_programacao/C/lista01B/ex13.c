/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int cc,dureza,resistencia;
    scanf("%d %d %d",&cc,&dureza,&resistencia);
    
    if(cc < 7 && dureza > 50 && resistencia > 80000) {
        printf("ACO DE GRAU = 10\n");
    }
    else if(cc < 7 && dureza > 50) {
        printf("ACO DE GRAU = 9\n");
    }
    else if(cc < 7) {
        printf("ACO DE GRAU = 8\n");
    }
    else {
        printf("ACO DE GRAU = 7\n");
    }
    
    return 0;
}
