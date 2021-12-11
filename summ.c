#include <stdio.h>
int main()

{
int son=1, n, s=0;
printf("n=");
scanf("%d",&n);
while (son<=n)
{s+=son;
son++;
}
printf("s=%d\n",s);

return 0;
}
