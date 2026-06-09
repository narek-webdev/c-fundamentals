/*
 * Problem: Define a struct named Point with two integer fields (x, y).
 *          Read coordinates from the user and print their sum (x + y)
 *          and product (x * y).
*/

#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main ()
{
    Point pt;

    printf("Write x: ");
    scanf("%i", &pt.x);

    printf("Write y: ");
    scanf("%i", &pt.y);
    
    int add = pt.y + pt.x;
    int mul = pt.y * pt.x;
    
    printf("Addition is %i, multiplication is %i", add, mul);
    
    return 0;
}