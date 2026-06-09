/*
 * Problem: Check whether the system is little-endian or big-endian
 *          using pointers.
 * Input:   None
 * Output:  "Little-endian" or "Big-endian"
*/

#include <stdio.h>

int main ()
{
    int x = 1;

    char * ct = (char *)&x;
    
    int res = *ct;
    
    if (res) {
        printf("Little endian\n");
    } else {
        printf("Big endian\n");
    }
    
    return 0;
}