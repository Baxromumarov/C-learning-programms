#include <stdio.h>
int main()

{int son=1,n=6;


for (int i=1; i<=n;i++)

{
for (int j=1; j<=n-i;j++)
{
{printf(" ");}

for(int i=(n*(n-1)/2)+1; i<=(n*(n+1))/2; i++)

{printf(" %d ",son);
son++;
}
printf(" ");

printf("\n");
}
}

return 0;}
