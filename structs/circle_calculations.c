/*
 * Problem: Define a struct named Circle with a double field (radius).
 *          Read the radius from the user and calculate:
 *          - Circumference: 2 * 3.14 * radius
 *          - Area: 3.14 * radius * radius
*/

#include <stdio.h>
#define PI 3.14

typedef struct {
    double radius;
} Circle;

int main ()
{
    Circle cr;
    
    printf("Write radius: ");
    scanf("%lf", &cr.radius);

    double circumference = 2 * PI * cr.radius;
    double area = PI * cr.radius * cr.radius;
    
    printf("Circumference is %lf, Area is %lf", circumference, area);
    
    return 0;
}