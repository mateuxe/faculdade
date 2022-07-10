#include <stdio.h>
 
int main() {
    int n;
 
    scanf("%d",&n);
 
    if (n >= 0) {
        int i, primo = 0;
        for ( i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                primo++;
                break;
            }
        }
            
        if (primo == 0 && n > 1) {
            printf("PRIMO\n");
        }
        else {
            printf("NAO PRIMO\n");
        }
    } 
    else {
        printf("Numero invalido!\n");
    }
    return 0;
}