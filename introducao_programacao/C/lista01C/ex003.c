#include <stdio.h>
#include <math.h>

    int n,i,elev;
int main() {

scanf("%d",&n);

for(i=1; i<=n; i++) {
    if(i%2 == 0) {
        elev =  pow(i,2);
        printf("%d^2 = %d\n",i,elev);  
    }
}
    return 0;
}