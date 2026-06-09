/*
 * Problem: Define a struct named Rectangle that stores two integers:
 *          length and width. Read both values from the user and
 *          calculate the area (length * width).
*/

#include <stdio.h>

typedef struct {
    int length;
    int width;
} Rectangle;

int main ()
{
    Rectangle rct;
    
    printf("Write length: ");
    scanf("%i", &rct.length);

    printf("Write width: ");
    scanf("%i", &rct.width);
    
    int area = rct.length * rct.width;
    
    printf("Area is: %i \n", area);
    
    return 0;
}