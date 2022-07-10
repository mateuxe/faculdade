#include <stdio.h>
 
int main()
{
    int m, n;
    int i, j, k;
    scanf("%d %d",&m,&n);
 
    k = 1;
    for(i=1; i<=m; i++) {
        for(j=1; j<=n; j++) {
            if(i == j)
                break;
            
            printf("(%d,%d)",i,j);
            
            if (j < n && j + 1 != i)
                printf("-");
        }
        printf("\n");
    }
    return 0;
}