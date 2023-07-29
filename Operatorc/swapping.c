#include <stdio.h>
int main()
{
 int a, b;
 printf("enter the a");
 scanf("%d", &a);
 
 printf("enter the b");
 scanf("%d", &b);
 
 a=a^b;
 b=a^b;
 a=a^b;
 
 printf("a = %d, b = %d\n", a,b);
 
 return 0;
 
 }
 
 
