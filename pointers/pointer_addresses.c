/*
 * Problem: Declare three pointers of different types, assign values
 *          to them, and print the memory addresses stored in each pointer.
 * Input:   None
 * Output:  Memory addresses of the three pointers
*/

#include <stdio.h>

int main ()
{
    int x = 10;
    int * xPointer = &x;

    printf("X pointer is %p\n", xPointer);
    
    char y = 'A';
    char * yPointer = &y;
    
    printf("Y pointer is %p\n", yPointer);
    
    double m = 2945.456;
    double * mPointer = &m;
    
    printf("M pointer is %p\n", mPointer);
    return 0;
}