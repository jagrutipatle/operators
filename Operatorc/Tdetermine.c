#include <stdio.h>
int main()
{
 int P, N, T, I;
 printf("enter the P\n");
 scanf("%d", &P);
 
 printf("enter the N\n");
 scanf("%d", &N);
 
 printf("enter the I\n");
 scanf("%d", &I);

 T=P*(1+I/100)^N;
 printf("The T of is %d\n", T);
 
 return 0;
 }
 
