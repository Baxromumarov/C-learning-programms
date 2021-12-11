#include <stdio.h>
int main()
{printf("Oy raqamini kiriting: ");
int n;
scanf("%d",&n);
if (n==1 || n==2 || n==12)
{ printf("Qish\n");}

else if (n==3 || n==4 || n==5)
{printf("Bahor\n");}

else if (n==6 || n==7 || n==8)
{printf("Yoz\n");}
else
{printf("Kuz\n");}

return 0;
}

#include <stdio.h>
int main()
{int oy;
printf("Oy raqamini kiriting: ");
scanf("%d",&oy);
switch(oy)
{
case 12:case 1:case 2:printf("Qish\n");break;
case 6:case 7:case 8:printf("Yoz\n");break;
case 9:case 10:case 11: printf("Kuz\n");break;
}
return 0;
}
