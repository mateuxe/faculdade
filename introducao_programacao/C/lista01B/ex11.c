/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,delta,x1,x2;
    scanf("%lf%lf%lf",&a,&b,&c);

    delta = b * b - 4 * a * c;
    
    if(delta == 0) {
        x1 = -b / (2 * a);
        
        if(b == 0 || a == 0) {
            x1 = 0.0;
        }
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n",x1);
    }
    else if(delta < 0) {
        printf("RAIZES IMAGINARIAS\n");
    }
    else {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        
        if(a == 0.0) {
            x1 = -b - sqrt(delta);
            x2 = -b + sqrt(delta);
        }
        
        printf("RAIZES DISTINTAS\n");
        if(x1 < x2) {
            printf("X1 = %.2lf\n",x1);
            printf("X2 = %.2lf\n",x2);
        } else {
            printf("X1 = %.2lf\n",x2);
            printf("X2 = %.2lf\n",x1);
        }
    }
    return 0;
}