#include <stdio.h>
int main()

{int kun;
printf("Kunni raqamini kiriting: ");
scanf("%d",&kun);
switch (kun)

{
case 1:printf("Dushanba\n");break;
case 2:printf("Seshanba\n");break;
case 3:printf("chorshanba\n");break;
case 4:printf("payshanba\n");break;
case 5:printf("Juma\n");break;
case 6:printf("shanba\n");break;
case 7:printf("Yakshanba\n");break;
default:printf("Bunday hafta kuni mavjud emas!\n");
}

return 0;
}

