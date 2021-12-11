#include <stdio.h>
int main()

{/*
 printf("Katta harflar: \n");
 for (int i=65; i<=90;i++)
 { printf("%d---------->%c\n,i,(char)i);}
  
 printf("Kichik harflar: \n");
 for (int i=97; i<=122;i++)
 {printf("%d-------->%c\n",i,(char)i); }
 
*/ 

char harf;
printf("Lotin harfini kiriting: \n");scanf("%c",&harf);
if (harf>='A' && harf <='Z')
 {
   printf("Harf=%c\n",harf+32);
 }
 else if (harf>='a' && harf<='z')
 {
   printf("Harf=%c\n",harf-32);
 }


return 0;}
