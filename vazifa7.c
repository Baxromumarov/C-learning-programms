#include <stdio.h>
int main()

{int a,b,c;
printf("1-sonni kiriting: ");
scanf("%d",&a);
printf("2-sonni kiriting: ");
scanf("%d",&b);
printf("3-sonni kiriting: ");
scanf("%d",&c);

int d=0;
if (a>0)
{d=d+1;}
if (b>0)
{d=d+1;}
if (c>0)
{d=d+1;}
printf("musbatlar sonni: %d\n",d);

int s=0;
if (a<0)
{s=s+1;}
if (b<0)
{s=s+1;}
if (c<0)
{s=s+1;}
printf("manfiylar soni: %d\n",s);


return 0;

}

