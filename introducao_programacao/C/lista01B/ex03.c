#include <stdio.h>

int
main ()
{
    int number;
    
    scanf("%d",&number);
    
    if(number % 3 == 0 && number % 5 == 0) {
        printf("O NUMERO E DIVISIVEL\n");
    }
    else {
        printf("O NUMERO NAO E DIVISIVEL\n");
    }

  return 0;
}