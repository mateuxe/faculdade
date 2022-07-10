
#include <stdio.h>
#include <math.h>

unsigned int fat(int i);

int main()
{
    double x, e;
    int n, i;
    
    scanf("%lf %d",&x,&n);
    
    for(i=0; i<=n; i++) {
        e += (pow(x,i) / fat(i));
    }
    printf("e^%.2lf = %.6lf",x,e);
    return 0;
}

unsigned int fat(int i) {
    unsigned int fat = 1;
    
    while (i) {
        fat *= i;
        i--;
    }
    return fat;
}
