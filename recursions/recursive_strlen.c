/*
 * Problem: Implement a recursive version of strlen without
 *          using loops or standard library functions.
 * Input:   A string (const char*)
 * Output:  The length of the string
 */

#include <stdio.h>

int my_strlen (const char *, int);

int main ()
{
    char * str = "eax";
    
    printf("String length is: %i\n", my_strlen(str, 0));
    
    return 0;
}

int my_strlen (const char * str, int count)
{
    if (*(str + count) == '\0') return 0;
    
    return count + my_strlen(str, count+1);
}
