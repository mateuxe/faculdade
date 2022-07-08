/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int number, fourth,print;
    int first,second,third;
    
    scanf("%d",&number);
    
    first = number / 100;
    second = (number / 10) % 10;
    third = number % 10;
    
    fourth = (first + second * 3 + third * 5) % 7;
    print = number * 10 + fourth;
    
    printf("O NOVO NUMERO E = %d\n",print);

    return 0;
}
