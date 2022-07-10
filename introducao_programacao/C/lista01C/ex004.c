#include <stdio.h>
 
int main() {
    // Write C code here
    int a,b;
    scanf("%d%d",&a,&b);
    
    if(a % 2 != 0) {
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }
    else {
        while (b--) {
        printf("%d ",a);
        a += 2;
    }
    }
}