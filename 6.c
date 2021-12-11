#include <stdio.h>
int main()

{int n=5,k=1,sum=0;
for (int i=1; i<=n; i++)
{printf("%d ",k);
if (i<n)
{printf("+ ");}
sum+=k;
k=(k*10)+1;
}
printf("= %d\n",sum);


return 0;}
