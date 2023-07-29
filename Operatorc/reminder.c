#include <stdio.h>
int main()
{
 int num1, num2, reminder;
 
 printf("enter the num1\n");
 scanf("%d",&num1);
 
 printf("enter the num2\n");
 scanf("%d",&num2);
 
 reminder=num1%num2;
 
 printf("%d",reminder);
 return 0;
}
