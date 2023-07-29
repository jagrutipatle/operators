#include <stdio.h>
int main()
{
 int pi;
 pi=3.14;
 int r, perimeter, area;
 
 printf("enter the r\n");
 scanf("%d",&r);

 area=r^2*pi;
 perimeter=2*pi*r;
 
 printf("area of circle is %d",area);
 printf("\nperimeter of circle %d",perimeter);
 return 0;
}
