#include <stdio.h>

int main()
{
    int i,j,k=5,m;
    for(i=1; i<=5; i++){
        for(j=1; j<=k; j++){
                printf(" ");
        }
        for(m=1; m<=i; m++){
                printf("%d",i);
                printf(" ");
        }
        printf("\n");
        k=k-1;
    }
        
    return 0;
}
