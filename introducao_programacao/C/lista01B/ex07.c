/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
    int x,y;
    
    scanf("%d",&x);
    
    if(x<1) {
        y = x;
    } else if(x>1) {
        y = x * x;
    } else {
        y = 0;
    }
    printf("Y = %d\n",y);
  return 0;
}

