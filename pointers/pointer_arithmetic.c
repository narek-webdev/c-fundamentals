/*
 * Problem: Declare two integer variables and two pointers. Assign
 *          the variable addresses to the pointers and perform
 *          arithmetic operations (addition, subtraction) using pointers.
 * Input:   None
 * Output:  Results of addition and subtraction via pointers
*/

#include <stdio.h>

int main ()
{
    int x = 10;
    int y = 2;

    int * xPtr = &x;
    int * yPtr = &y;
    
    printf("Sum is: %i\n", *xPtr + *yPtr);
    
    printf("Subtraction is: %i\n", *xPtr - *yPtr);
    
    printf("Dividing is: %i\n", *xPtr / *yPtr);
    
    return 0;
}