#include <stdio.h>
 
int main()
{
    int A,B, anos = 0;
    
    scanf("%d",&A);
    scanf("%d",&B);
    
    while (A <= B) {
        A += A * 0.03;
        B += B * 0.015;  
        anos++;
    }
    printf("ANOS = %d\n",anos);
 
    return 0;
}