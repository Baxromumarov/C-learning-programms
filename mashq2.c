#include <stdio.h>
int main()

{
printf("2+3=%d\n",2+3);
printf("%d\n",2==3);
printf("%d\n",3!=2);
printf("%d\n",5>2);
printf("%d\n",2<1);
printf("%d\n",1<=1);
printf("%d\n",2>=1);
printf("%d\n",(1<2)&&(2<3));
printf("%d\n",(1>2)||(2<3));

printf("%f\n",2./3);
printf("%d\n", 1 && 0);
printf("%d\n",1 || 0);

printf("%d\n", !(1>2)&& 2<3==1);
return 0;

}
