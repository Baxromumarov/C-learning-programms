#include <stdio.h>
int main()

{int i,j,k,s=0,n=4;


for (int i=1; i<=n; i++)

{
for (int j=1; j<=n-i; j++)
{printf(" ");


for(int j=1; j<=i;j++)

{
printf("%d ",s);
s++;

}


}
printf("\n");

}
return 0;}
