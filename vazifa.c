#include <stdio.h>
int main()
// 1-masala
{
int son;
printf("Ikki xonali son kiriting: ");
scanf("%d",&son);
int a=son/10;
int b=son%10;
printf("%d%d\n",b,a);




//2-masala


int n;
printf("3 xonali son kiriting: ");
scanf("%d",&n);

int x=n/100;
int y=(n/10)-(x*10);
int z=n%10;

printf("%d%d%d\n",z,y,x);

return 0;
}
