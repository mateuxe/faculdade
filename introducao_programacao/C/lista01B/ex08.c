#include <stdio.h>

int
main ()
{
    int ano;
    
    scanf("%d",&ano);
    
    if(ano <= 1582) {
        printf("ANO NAO BISSEXTO\n");
    }
    else if(ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0){
        printf("ANO BISSEXTO");
    }
    else if(ano % 4 == 0 && ano % 100 != 0) {
        printf("ANO BISSEXTO");
    }
    else {
        printf("ANO NAO BISSEXTO");
    }
    
  return 0;
}

