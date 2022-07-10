#include <stdio.h>

int calcularMMC(int a, int b, int c, int* mmc);

int main()
{ 
    int a, b, c, mmc = 1;
    scanf("%d %d %d",&a,&b,&c);
    
    calcularMMC(a, b, c, &mmc);
    printf("MMC: %d\n",mmc);
    return 0;
}

int calcularMMC(int a, int b, int c, int* mmc) {
    int divi = 2;
    
    while (a != 1 || b != 1 || c != 1) {
        if(!(a % divi) || !(b % divi) || !(c % divi)) {
            *mmc *= divi;
            printf("%d %d %d :%d\n",a,b,c,divi);
            
            if(!(a % divi) && a != 1)
                a /= divi;
            if(!(b % divi) && b != 1)
                b /= divi;
            if(!(c % divi) && c != 1)
                c /= divi;
        }
        else {
            divi++;
        }
    }
    return *mmc;
}