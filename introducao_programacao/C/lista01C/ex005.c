#include <stdio.h>
 
int main() {
    // Write C code here
    int a,r,n,n1,soma;
    scanf("%d %d %d",&a,&r,&n);
    
    
    n1 = a + (n - 1) * r;
    soma = (n * (a + n1)) / 2;
    
    printf("%d\n",soma);
    return 0;
}