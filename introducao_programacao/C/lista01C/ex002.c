#include <stdio.h>
    
    int count;
int main()
{
    scanf("%d", &count);
    while(count--) {
        double fahrenheit,celsius;
        scanf("%lf", &fahrenheit);
        celsius = (5.0 * (fahrenheit - 32.0)) / 9.0;
        
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n",fahrenheit,celsius);
    } 
 
    return 0;
}