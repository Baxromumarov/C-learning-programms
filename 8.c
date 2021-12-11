#include <stdio.h>
int main()

{int s=1,n=4;

for (int i=0; i<=4; i++)

{s=1;
for (int k=0; k<n-i; k++)

{printf(" ");}

for (int j=0; j<=i; j++)

{printf(" %d ",s);
s=(s*(i-j)/(j+1));}

printf("\n");
}


return 0;
}
