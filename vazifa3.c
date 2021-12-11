#include <stdio.h>
int main()

{
int a=435;
int b=a%100;
int c=a/100;
printf("%d%d\n",b,c);

//keyingi

int x=961;
int y=x%10;
int z=x/10;
printf("%d%d\n",y,z);

//keyingi

int e=123;
int f=e/100;
int g=(e%100)/10;
int h=e%10;
printf("%d%d%d\n",g,f,h);

//keyingi

int i=782;
int j= i%10;
int k=(i%100)/10;
int l=i/100;
printf("%d%d%d\n",l,j,k);

return 0;
}
