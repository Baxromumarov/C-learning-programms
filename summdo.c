#include <stdio.h>
int main()

{
int son=1, s=0,n;
printf("n=");
scanf("%d",&n);

do 
{s+=son;
printf("s=%d\n",s);
printf("son=%d\n",son);
son++;
}while (son<=n);
return 0;
}
