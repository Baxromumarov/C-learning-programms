#include <stdio.h>
int main()
{char y; int k; begin:
printf("Yo'nalish tanlang: ");
scanf(" %c",&y);
switch(y)
{
case 's':printf("Shimol tomon\n");break;
case 'j':printf("Janub tomon\n");break;
case 'q':printf("Sharq tomon\n");break;
case 'g':printf("G'arb tomon\n");break;
default: printf("Xato!\n"); goto begin;
}
printf("Komanda kiriting: ");
scanf("%d",&k);
switch (k)
{
case 0:printf("Harakatni davom ettish\n");break;
case 1:printf("Chapga burilish\n");break;
case 2:printf("O'ngga burilish\n");break;
default: goto stop;
}
goto begin;
stop:

return 0;
}
