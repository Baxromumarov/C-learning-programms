/*
#include <stdio.h>
int main()
//a<b
{int a,b;
printf("a bdan kichik bo'lishi kerak\n");
printf("a ni kiriting: ");
scanf("%d",&a);
printf("b ni kiriting: ");
scanf("%d",&b);
int s=a;
while (s<b)
{

printf("%d\n",s);
s+=1;
}

printf("%d\n",s);

return 0;
}

*/




#include <stdio.h>
int main()
{
int a,b;
printf("a bdan kichik bo'lishi kerak\n");
printf("a ni kiriting: ");
scanf("%d",&a);
printf("b ni kiriting: ");
scanf("%d",&b);
int s=a;
do
{
printf("%d\n",s);
s+=1;
}while(s<b);

printf("%d\n",s);

return 0;
}
