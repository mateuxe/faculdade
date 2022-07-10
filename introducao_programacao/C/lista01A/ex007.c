#include <stdio.h>
#include <math.h>
 
int main() {
    double a,b,c,t,area;
 
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
 
    t = (a + b + c) / 2;
    area = sqrt((t * (t - a)) * (t - b) * (t - c));
 
    printf("A AREA DO TRIANGULO E = %.2f\n",area);
 
    return 0;
}