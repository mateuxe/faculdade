
#include <stdio.h>

int
main ()
{
    float nota;
    char conceito;
    
    scanf("%f",&nota);
    
    if(nota < 6.0) {
        conceito = 'D';
    } else {
        if(nota < 7.5) {
            conceito = 'C';
        } else {
            if(nota < 9.0) {
                conceito = 'B';
            } else {
                conceito = 'A';
            }
        }
    }
    
    printf("NOTA = %.1f CONCEITO = %c\n",nota,conceito);
  return 0;
}
