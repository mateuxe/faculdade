#include <stdio.h>
 
int main() {
    // Write C code here
    double n,s,i,denom = 1,h;
    
    scanf("%lf",&n);
    
    if(n <= 1) {
        printf("Numero invalido!\n");
    } else {
        
        for (i = 1; i<=n; i++) {
            s = denom / i;
            h += s; 
        }
        printf("%.6lf\n",h);
    }
    
    return 0;
}