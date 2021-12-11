#include <stdio.h>
int main()

{int a,b,c;
printf("1-sonni kiriting: ");
scanf("%d",&a);
printf("2-sonni kiriting: ");
scanf("%d ",&b);
printf("3-sonni kiriting: ");
scanf("%d",&c);

if (a>b)
{
if (a>c)
{printf("Katta son=%d\n",a);}
else
{printf("Katta son=%d\n",c);}
}
else if (b>c)
{printf("Katta son=%d\n",b);}
else 
{printf("Katta son=%d\n",c);}

return 0;
}
