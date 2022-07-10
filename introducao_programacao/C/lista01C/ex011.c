#include <stdio.h>
 
int main()
{
int x, num, ant, sequencia, sequenciamax, i;
 
scanf("%d", &x);
 
scanf("%d", &ant);
sequencia = 1;
sequenciamax = 1;
 
for (i = 1; i < x; i++)
{
scanf("%d", &num);
if (num > ant)
{
sequencia = sequencia + 1;
if (sequenciamax < sequencia)
{
sequenciamax = sequencia;
}
}
else
{
sequencia = 1;
}
ant = num;
}
printf("O comprimento do segmento crescente maximo e: %d\n", sequenciamax - 1);
 
return 0;
}
×