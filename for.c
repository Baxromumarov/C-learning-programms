#include <stdio.h>
int main()
/*
{int s=0, n;
printf("n= ");
scanf("%d",&n);

printf("Toqlar: ");
for (int i=1;i<=n;i+=2)
{printf("%d ",i);}

printf("\nJuftlar: ");
for (int i=0;i<=n;i+=2)
{printf("%d ",i);}

return 0;
}
*/

{int son,k=0,i;
printf("son= ");
scanf("%d",&son);

for (i=2;i<=son/2;i++)
{if (son%i==0)
{k++;}
}

if (k==0)
{printf("%d tub son\n",son);}
else
{printf("%d tub son emas\n",son);}

return 0;
}
