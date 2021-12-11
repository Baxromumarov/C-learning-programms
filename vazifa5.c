#include <stdio.h>
int main()

{
printf("N ni qiymatini kiriting:");
int N;
scanf("%d",&N);
int a=N/60;
int b=N/360;
printf("minut=%d\n",a);
printf("soat=%d\n",b);
printf("sekund=%d\n",N);
return 0;
}
