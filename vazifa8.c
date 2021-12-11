#include <stdio.h>
int main()

{
int a,b;
printf("1-sonni kiriting: ");
scanf("%d",&a);
printf("2-sonni kiriting: ");
scanf("%d",&b);

if (a>b)
{printf("1-son 2-dan katta");
printf("%d%d",a,b);}
else
{printf("1-son 2-dan kichik\n");
printf("%d\t%d\n",b,a);}

return 0;
}
