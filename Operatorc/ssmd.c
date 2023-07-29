#include <stdio.h>
int main()
{
  int a, b, s, sub, m, d;
  printf("enter the a\n");
  scanf("%d", &a);
  
  printf("enter the b\n");
  scanf("%d", &b);

  
  s=a+b;
  sub=a-b;
  m=a*b;
  d=a/b;
  
  printf("\n%d \n%d \n%d \n%d", s, sub, m, d);
  
}
