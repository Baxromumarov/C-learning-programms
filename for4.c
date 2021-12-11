#include <stdio.h>
int main()
{int narx,i=1;
printf("Konfet narxini kiriting: ");
scanf("%d",&narx);

/*
while (i<=10)
{
printf("%d ",i);
printf("kg konfet narxi= %d\n",i*narx);
i+=1;
}

return 0;
}

*/

do
{printf("%d ",i);
printf("kg konfet narxi= %d\n",i*narx);
i+=1;
}while(i<=10);

return 0;
}
