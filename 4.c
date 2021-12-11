#include <stdio.h>
int main()

{int qator=4,i,j,k,l=1;
    
  
    for(i=1; i<=qator; i++){
        for(j=1; j<=qator-i; j++){
            printf(" ");
        }
        for(k=1; k<=i; k++, l++){
            printf("%d ",l);
        }
        printf("\n");
    }
    return 0;
}
