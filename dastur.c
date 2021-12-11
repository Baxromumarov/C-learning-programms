#include <stdio.h>
int main()
{
  int i,g=0, s=0, j=0, q=0;
  
  h:  printf ("Robot shimol tamonga qarab turibdi.\n" );//Kordinatalari 0,0,0,0;
  printf( "\nQuyidagi buyruqlardan birini kiriting:\n   0-Oldinga bir qadam.\n   1-chapga burilish.\n   2-o'ngga burilish.\n   3-to'xtatish.\n");  
  scanf("%d", &i);
  switch (i)
  {
  case 0:
  {s = s + 1; goto h; break;  }
  case 1:
  {goto k; break; }
  case 2:
  {goto p; break; }
  case 3:
  {goto o; break; }
  }
k:
  printf( "Robot g'arb tamonga qarab turibdi.");
  printf("\nQuyidagi buyruqlardan birini kiriting:\n   0-Oldinga bir qadam.\n   1-chapga burilish.\n   2-o'ngga burilish.\n   3-to'xtatish.\n" );
  scanf("%d", &i);
  switch (i)
  {
  case 0:
  {g = g + 1; goto k; break; }
  case 1:
  {goto l; break; }
  case 2:
  {goto h; break; }
  case 3:
  {goto o; break; }
  }
l:
 printf( "Robot janub tamonga qarab turibdi.");
  printf("\nQuyidagi buyruqlardan birini kiriting:\n   0-Oldinga bir qadam.\n   1-chapga burilish.\n   2-o'ngga burilish.\n   3-to'xtatish.\n" );
  scanf("%d", &i);
  switch (i)
  {
  case 0:
  {j = j + 1; goto l; break; }
  case 1:
  {goto p; break; }
  case 2:
  {goto k;  break; }
  case 3:
  {goto o;  break; }
  }
p:
  printf( "Robot sharq tamonga qarab turibdi.");
  printf("\nQuyidagi buyruqlardan birini kiriting:\n   0-Oldinga bir qadam.\n   1-chapga burilish.\n   2-o'ngga burilish.\n   3-to'xtatish.\n" );
  scanf("%d", &i);
  switch (i)
  {
  case 0:
  {q = q + 1; goto p; break; }
  case 1:
  {goto l;  break; }
  case 2:
  {goto h; break; }
  case 3:
  {goto o;  break; }
  };
o:
   printf("Shimol:%d Janub:%d Sharq:%d G'arb:%d",s,j,q,g);
return 0;}


