#include <stdio.h>
int main()
{int son, s=0;

while (1)
{printf("sonni kiriting:\n");
if (scanf("%d",&son))
{s+=son;}

else
{break;}

}

printf("natija=%d\n",s);
//char s=(char)son;
return 0;
}
