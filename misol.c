#include <stdio.h>
int main()
{int n;
int narx=0;
begin:
printf("Meva tanlang:\n1.olma-12000\n2.anor-30000\n3.ananas-95000\n4.banan-20000\n5.gilos-25000\n ");
scanf("%d",&n);;
switch(n)
{
case 1: narx+=12000;break;
case 2: narx+=30000;break;
case 3: narx+=95000;break;
case 4: narx+=20000;break;
case 5: narx+=25000;break;
default: printf("Xato\n");goto begin;
}
int s;
printf("Xaridni davom ettirasizmi?\nyes-1\nno-0\n");
scanf(" %d",&s);

switch(s)
{
case 1:goto begin; break;
case 0:printf("Umumiy to'lov=%d\n",narx);break;
default: goto begin;
}

return 0;
}
