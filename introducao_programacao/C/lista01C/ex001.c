#include <stdio.h>
 
int main()
{
    int quant, total, cem = 100.00,i = 1;
    
    scanf("%d",&quant);
    while (quant--) {
        double P,G,A,C,renda;
        double iP,iG,iA,iC;
        scanf("%d %lf %lf %lf %lf",&total,&P,&G,&A,&C); 
        
        
        iP = total * P / cem;
        iG = (total * G / cem) * 5.00;
        iA = (total * A / cem) * 10.00;
        iC = (total * C / cem) * 20.00;
        renda = iP + iG + iA + iC;
        
        printf("A RENDA DO JOGO N. %d E = %.2lf\n",i,renda);
        i++;
    }
    return 0;
}