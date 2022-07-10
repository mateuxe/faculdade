/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    char x,y,z;
    int maior,medio,menor;
    scanf("%d %d %d\n", &a, &b, &c);
    scanf("%c%c%c",&x,&y,&z);


    if(a > b && b < c && a > c) {
        maior = a;
        medio = c;
        menor = b;
    }
    else if(b > a && a < c && b > c) {
        maior = b;
        medio = c;
        menor = a;
    }
    else if (c > a && a < b && c > b ){
        maior = c;
        medio = b;
        menor = a;
    }
    else if(a > b && b > c) {
        maior = a;
        medio = b;
        menor = c;
    }
    else if(b > a && a > c) {
        maior = b;
        medio = a;
        menor = c;
    }
    else {
        maior = c;
        medio = a;
        menor = b;
    }
    
    if(x == 'A' && y == 'B' && z == 'C') {
        printf("%d %d %d\n",menor,medio,maior);
    }
    else if(x == 'A' && y == 'C' && z == 'B') {
        printf("%d %d %d\n",menor,maior,medio);
    }
    else if(x == 'B' && y == 'A' && z == 'C') {
        printf("%d %d %d\n",medio,menor,maior);
    }
    else if(x == 'B', y == 'C', z == 'A') {
        printf("%d %d %d\n",medio,maior,menor);
    }
    else if(x == 'C', y == 'A', z == 'B') {
        printf("%d %d %d\n",maior,menor,medio);
    }
    else {
        printf("%d %d %d\n",maior,medio,menor);
    }
    return 0;
}
