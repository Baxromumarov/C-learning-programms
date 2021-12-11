#include <stdio.h>
int main()


{int narx;
float s=0.1;
printf ("Konfet narxini ko'rsating: ");
scanf("%d",&narx);


while (s<1)
{
printf("%f ",s);

printf("kg konfet narxi=%f\n",narx*s);
s+=0.1;
}
return 0;
}

