
#include <stdio.h>
#include <math.h>

unsigned int fat(int n);

int main()
{
    double cosen, x;
    int n, i;
    
    scanf("%lf %d",&x,&n);
    
    for(i=0; i<=n; i++) {
        
        cosen += (pow((-1),i) * pow(x, 2 * i)) / fat(2 * i);
    }
    printf("cos(%.2lf) = %.6lf\n",x,cosen);
    return 0;
}

unsigned int fat(int n) {
    unsigned int fat = 1;
    
    while (n) {
        fat *= n;
        n--;
    }
    return fat;
}