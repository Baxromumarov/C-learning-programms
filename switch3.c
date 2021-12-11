#include <stdio.h>
int main()
{
int a,soat,minut,sekund,clock;
printf("Vaqtni kiriting:\n ");
scanf ("%2d%2d%2d",&soat,&minut,&sekund);
if (soat<24 && minut<60 && sekund<60)
begin:
{
 printf("Buyruqlardan birini tanlang: \n");
 printf("1) +5 soat\n"); 
 printf("2) +5 minut\n"); 
 printf("3) +5 sekund\n"); 
 scanf("%d",&a);
 switch(a)
 {
 case 1: soat+=5;break;
 case 2: minut+=5;break;
 case 3: sekund+=5;break;

default: printf("Xato!"); goto begin;
 }

if (minut>60)
{minut-=60;
soat+=1;}

if (sekund>60)
{sekund-=60;
minut+=1;}

if (soat>=24)
{soat-=24;}




if (soat<10 &&  minut<10 && sekund<10)
{printf("0%d : 0%d : 0%d\n ",soat, minut, sekund );}


else if (soat>=24)
{
printf("0%d: %d : %d\n",soat,minut,sekund);}

else if(soat<10)
{printf("0%d : %d : %d\n",soat,minut,sekund);}

else if (minut<10)
{printf("%d : 0%d : %d\n",soat,minut,sekund);}

else if( sekund<10)
{printf("%d : %d : 0%d\n",soat,minut,sekund);}

else if (minut<10 && soat <10)
{printf("0%d : 0%d : %d\n",soat, minut,sekund);}
else
{printf("%d : %d : %d\n",soat,minut,sekund);}
}


return 0;}
