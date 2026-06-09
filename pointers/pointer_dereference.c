/*
 * Problem: Declare an integer variable and a pointer. Assign the
 *          variable's address to the pointer and print the variable's
 *          value through the pointer (dereferencing).
 * Input:   None
 * Output:  The value of the variable printed via pointer
*/

#include <stdio.h>

int main ()
{
    int x = 10;
    
    int * pointer = &x;
    
    printf("%i\n", *pointer);
    
    return 0;
}