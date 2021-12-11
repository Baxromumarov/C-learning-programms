/* 
#include <stdio.h>
int main()

{int k, son, s=1;
printf("k ni kiriting: ");
scanf("%d",&k);
printf("son ni kiriting: ");
scanf("%d",&son);

while (s<k)
{
printf("%d,",son);
s+=1; 
//s++
}
printf("%d.\n",son);

return 0;
}
*/

//2-usul


#include <stdio.h>
int main()

{
int son, s=0,k;
printf("Sonni kiriting: ");
scanf("%d",&son);
printf("k ni kiriting: ");
scanf("%d",&k);
do 
{ s+=1;
printf("%d\n",son);
}while (s<k);
return 0;
}
