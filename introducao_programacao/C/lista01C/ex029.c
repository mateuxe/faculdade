
#include <stdio.h>
#include <math.h>

unsigned int fat(int n);

int main()
{
    double sen, x;
    int n, i;
    
    scanf("%lf %d",&x,&n);
    
    for(i=0; i<=n; i++) {
        
        sen += (pow((-1),i) * pow(x, 2 * i + 1)) / fat(2 * i + 1);
    }
    printf("seno(%.2lf) = %.6lf\n",x,sen);
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