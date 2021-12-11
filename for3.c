#include <stdio.h>
int main()
{int a,b;
printf("a bdan kichik bo'lishi kerak\n");
printf("a ni kiriting: ");
scanf("%d",&a);
printf("b ni kiriting: ");
scanf("%d",&b);

/*
while (b>(a+1))
{
printf("%d\n",b-1);
b-=1;
}


return 0;
}
*/

do
{
printf("%d\n",b-1);
b-=1;
}while(b>(a+1));

return 0;
}
