/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    double a,b,c;
    double maior,medio,menor;
    
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    
    if(a > b && a > c && b > c) {
        maior = a;
        medio = b;
        menor = c;
    } else {
        if(a>b && a>c && c>b){
            maior = a;
            medio = c;
            menor = b;
        } else {
            if(b>a && b>c && a>c) {
                maior = b;
                medio = a;
                menor = c;
            } else {
                if(b>a && b>c && c<a){
                    maior = b;
                    medio = c;
                    menor = a;
                } else {
                    if(c>a && c>b && a>b){
                        maior = c;
                        medio = a;
                        menor = b;
                    } else {
                        if(c>a && c>b && b>a){
                            maior = c;
                            medio = b;
                            menor = a;
                        } else {
                            if(a=b && a>c) {
                                maior = a;
                                medio = b;
                                menor = c;
                            }
                            else if(a=b && a<c) {
                                maior = c;
                                medio = a;
                                menor = b;
                            } else {
                                if(b=c && b>a) {
                                    maior = b;
                                    medio = c;
                                    menor = a;
                                }
                                else if(b=c && b<a) {
                                    maior = a;
                                    medio = b;
                                    menor = c;
                                }
                                else {
                                    if(a=c && a>b) {
                                        maior = a;
                                        medio = c;
                                        menor = b;
                                    }
                                    else if(a=c && a<b){
                                        maior = b;
                                        medio = a;
                                        menor = c;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        
    }
    
    printf("%.2lf, %.2lf, %.2lf\n",menor,medio,maior);

    return 0;
}
