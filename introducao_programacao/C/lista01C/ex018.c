#include <stdio.h>
 
int main()
{
    int count;
    int a,b;
    int a1,a2,a3;
    int b1,b2,b3;
    
    scanf("%d",&count);
    
    while(count--) {
        scanf("%d %d\n",&a,&b);
        
        a1 = a / 100;
        a2 = (a / 10) % 10;
        a3 = a % 10;
        
        b1 = b / 100;
        b2 = (b / 10) % 10;
        b3 = b % 10;
        
        a = (a3 * 100) + (a2 * 10) + a1;
        b = (b3 * 100) + (b2 * 10) + b1;
        
        if (a > b) {
            printf("%d\n",a);
        }
        else {
            printf("%d\n",b);   
        }
        
    }
 
 
    return 0;
}
×