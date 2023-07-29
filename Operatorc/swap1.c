#include <stdio.h>
int main()
{
 int a, b, temp=0;
 printf("enter the a");
 scanf("%d", &a);
 
 printf("enter the b");
 scanf("%d", &b);
 
 temp=a;
 a=b;
 b=temp;
 
 printf("a = %d, b = %d\n", a,b);
 
 return 0;
 
 }
