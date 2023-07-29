#include <stdio.h>
int main()
{
 int pi;
 pi=3.14;
 int r, l, sacone;
 printf("enter the r\n");
 scanf("%d", &r);
 
 printf("enter the l\n");
 scanf("%d", &l);
 
 sacone=pi*r^r+pi*r*l;
 
 printf("surface area of cone %d", sacone);
 return 0;
}
