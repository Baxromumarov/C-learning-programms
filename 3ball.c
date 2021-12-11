#include <stdio.h>
int main()

{int son,s1,teskari=0;
printf("son=");
scanf("%d",&son);

while(son!=0)
{s1=son%10;
teskari=teskari*10+s1;
son/=10;}

while(teskari!=0)
{
s1=teskari%10;
printf("%d\n",s1);
teskari/=10;}

return 0;}

