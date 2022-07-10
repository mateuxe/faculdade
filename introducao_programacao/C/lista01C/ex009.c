#include <stdio.h>
 
int main() {
    // Write C code here
   int n,fat,fatf,count,n1;
   scanf("%d",&n);
   
   n1 = n;
   fatf = 1;
   count = n; // 4 3 2 1 
   while(n--) {
       fat = count--;
       fatf *= fat;
   }
   printf("%d! = %d\n",n1,fatf);
    
    return 0;
}