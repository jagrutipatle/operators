#include <stdio.h>
#include <math.h>

#define pi 3.14

int main() {
    double radius, area;
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);
    area = 4 *pi*pow(radius, 2);
    printf("The area of the sphere with radius %.2lf is: %.2lf\n",   radius, area);
    return 0;
}
