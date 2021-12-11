#include <stdio.h>
int main()
{
  int son1=4.5;
  short son2=5;
  long long son3=123456789;
  float fson=7.58;
  double dson=12.4545454;
  printf("son1=%d\n",son1);
  printf("son2=%d\tson3=%lld\n",son2,son3);
  printf("fson=%f\tdson=%lf\tdson=%e\n",fson,dson,dson);
  return 0;
}
