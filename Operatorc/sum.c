/*#include <stdio.h>
int main()
{
 int num1, num2, sum;
 printf("enter the frist number\n");
 scanf("%d", &num1);
 
 printf("enter the second number\n");
 scanf("%d", &num2);
 
 sum=num1+num2;
 printf("The sum of %d and %d is %d\n", num1, num2, sum);
 
 return 0;
 }*/
 
  
  
 #include <stdio.h>
 int main()
 {
  int sp, cp, profit; 
  float P;
  printf("enter the sp, enter the cp");
  scanf("%d %d", &sp, &cp);
  
  profit=sp-cp;
  P=(profit/cp)*100;
  
  printf("percent is %f", P);
  
  return 0;
}
  
