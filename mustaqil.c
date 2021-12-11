#include <stdio.h>
int main()
{printf("Bahoni kiriting: ");
int k;
scanf("%d",&k);
switch(k)
{
case 1: printf("1-yomon\n");break;
case 2: printf("2-qoniqarsiz\n");break;
case 3: printf("3-qoniqarli\n");break;
case 4: printf("4-yaxshi\n");break;
case 5: printf("5-a'lo\n");break;
default: printf("xato!\n");
}
return 0;
}
