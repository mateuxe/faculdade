#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int n;
    int i, cubo, a, b = 1, c = 0, sum = 0;
    scanf("%u",&n);

    for(i=1; i <= n; i++) {
        a = b * c + 1;
        cubo = pow(b,3);
        
        printf("%d*%d*%d = ",b,b,b);
        
        do {
            printf("%d",a);
            sum += a;
            a += 2;
            
            if(sum == cubo) {
                printf("\n");
            }
            else{
                printf("+");
            }
            
        } while(sum != cubo);
        
        b++;
        c++;
        sum = 0;
    }
    return 0;
}