#include <stdio.h>
int main()

{printf("Oy raqamini kiriting:");
int n;
scanf("%d",&n);
switch(n)
{ 
case 1:printf("31-yanvar\n");break;
case 2:printf("28-fevral\n");break;
case 3:printf("31-mart\n");break;
case 4:printf("30-aprel\n");break;
case 5:printf("31-may\n");break;
case 6:printf("30-iyun\n");break;
case 7:printf("31-iyul\n");break;
case 8:printf("31-avgust\n");break;
case 9:printf("30-sentabr\n");break;
case 10:printf("31-oktabr\n");break;
case 11:printf("30-noyabr\n");break;
case 12:printf("31-dekabr\n");break;
default:printf("Oy raqami xato kiritildi!\n");
} 

return 0;
}


