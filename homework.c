#include <stdio.h>
int main()
{printf("Ismingizni kiriting: ");
char ism[20];
scanf("%s",&ism);

printf("Familiyangizni kiriting: ");
char fam[20];
scanf("%s",&fam);

printf("Yoshingizni kiriting: ");
int n;
scanf("%d",&n);

if (n%2==0)
{printf("%s\n",fam);}

else
{printf("%s\n",ism);}

return 0;
}
