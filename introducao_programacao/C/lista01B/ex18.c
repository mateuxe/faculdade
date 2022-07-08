/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double a,b,c,perimetro,area;
    char triangulo;
    scanf("%lf %lf %lf",&a,&b,&c);
    
    
    if(a < b + c && a > abs(b - c)) {
        if(b < a + c && b > abs(a - c)) {
            if(c < a + b && c > abs(a - b)) {
                triangulo = 'S';
            }
        }
    } else {
        triangulo = 'N';
    }
    
    if(triangulo == 'S') {
        perimetro = a + b + c;
        printf("Perimetro = %.1lf\n",perimetro);
    } else {
        area = ((a + b) * c) / 2.0;
        printf("Area = %.1lf\n",area);
    }
    return 0;
}
