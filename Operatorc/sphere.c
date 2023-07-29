#include <stdio.h>
int main()
{
 int pi;
 pi=3.14;
 
 int r, sasphere, volume;
 printf("enter the r\n");
 scanf("%d", &r);
 
 volume=4*pi*r^2;
 sasphere=(3/4)*pi*r^3;
 
 printf("volume of sphere %d\n", volume);
 printf("surface area of sphere %d", sasphere);
 return 0;
}

