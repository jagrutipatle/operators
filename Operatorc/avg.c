#include <stdio.h>
int main()
{
 int num1, num2, sum, avg;
 printf("enter the frist number\n");
 scanf("%d", &num1);
 
 printf("enter the second number\n");
 scanf("%d", &num2);
 
 sum=num1+num2;
 avg=sum/2;
 printf("The avg of is %d\n", avg);
 
 return 0;
 }
