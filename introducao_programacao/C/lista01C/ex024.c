
#include <stdio.h>

int main()
{
    int seq, i, cont = 0;
    double num, atual = 0;
    
    do {
        scanf("%d",&seq);
        
        atual = 0;
        cont = 0;
        if(seq != 0) {
        for(i=0; i<seq; i++) {
            scanf("%lf", &num);
            
            if(atual < num) {
                atual = num;
                cont++;
            } else {
                atual = num;
            }
        }
        
        if(cont == seq)
            printf("ORDENADA\n");
        else
            printf("DESORDENADA\n");
        }
    } while(seq != 0); 

    return 0;
}
