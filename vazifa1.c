#include <stdio.h>
int main()

{int a=10,b=23,c=12;
int d=a,e=b;
a=c;
b=d;
c=e;
printf("a=%d,b=%d,c=%d\n",a,b,c);


int A=15, B=22, C=18;
int D=A, E=B;
B=C;
C=D;
A=E;
printf("A=%d,B=%d,C=%d\n",A,B,C);
return 0;

}
