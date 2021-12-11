#include<stdio.h>
 
int main() {
    int i, j, oxirgi=4, son = 1;
 
   
 
    for (i = 0; i < oxirgi; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", son);
            son++;
        }
        printf("\n");
    }
    return(0);
}
