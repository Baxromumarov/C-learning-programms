#include <stdio.h>
int main()

{int kun, oy, yil,days=0;
printf("sanani kiriting: ");
scanf("%2d%2d%4d", &kun,&oy,&yil);

if (oy>0 && oy<13)
{switch (oy)
{
case 1: if(kun>0 && kun<32) {days+=31;}
case 2: if (yil%4==0 && yil%100!=0 || yil%400==0) {days+=29;}
        else {days+=28;}
case 3: days+=31;
case 4: days+=30;
case 5: days+=31;
case 6: days+=30;
case 7: days+=31;
case 8: days+=31;
case 9: days+=30;
case 10: days+=31;
case 11: days+=30;
case 12: days+=31;

}

}
days-=kun;
printf("Yangi yilgacha %d kun qoldi\n",days);

return 0;}
