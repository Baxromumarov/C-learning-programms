#include <stdio.h>
int main()

{int yil, oy, kun, now;
begin:
printf("Yil=");
scanf("%d",&yil);
printf("Oy=");
scanf("%d",&oy);
printf("Kun=");
scanf("%d",&kun);

if (oy>12 || oy<0)
{printf("xato\n");goto begin;}
if (kun>31 || kun<0)
{printf("xato\n");goto begin;}

now=(yil*365+yil+kun)%7;
if (now==1)
{printf("dushanba\n");}

else if (now==2)
{printf("seshanba\n");}

else if (now==3)
{printf("chorshanba\n");}

else if (now==4)
{printf("payshanba\n");}

else if (now==5)
{printf("juma\n");}

else if (now==6)
{printf("shanba\n");}

else
{printf("yakshanba\n");}

return 0;
}
