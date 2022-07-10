#include <stdio.h>
 
int main()
{
int times, i, j, final = 1;
scanf("%d", &times);
 
if (times == 1)
{
printf("Campeonato invalido!");
}
 
else
{
for (i = 1; i < times; i++)
{
 
for (j = 2; j <= times; j++)
{
if (i != j && i < j)
{
printf("Final %d: Time%d X Time%d\n", final++, i, j);
}
}
}
}
}