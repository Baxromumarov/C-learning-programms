#include <stdio.h>
int main()

{
int son;
printf("Ikki xonali son kiriting: ");
scanf("%d",&son);

int a=son/10;
int b=son%10;
printf("%d\n",a+b);

int n;
printf("3xonali son kiriting: ");
scanf("%d",&n);

int c=n/100;
int d=(n/10)-(c*10);
//int d=(123%100)/10; 2-usul
int f=n%10;
printf("%d\n",c+d+f);
return 0;
}
