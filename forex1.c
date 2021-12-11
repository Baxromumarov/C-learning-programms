#include <stdio.h>
int main()
{char soz,n; int  s=0;

while (1)
{n=scanf("%s",&soz);
s+=1;

if (n>0 || n<0 || n==0)
{break;}
}
printf("Kiritgan so'zlaringiz soni:%d\n",s);

return 0;
}

