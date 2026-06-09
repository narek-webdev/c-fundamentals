/*
 * Problem: Implement a recursive function that takes a string
 *          and returns the first uppercase letter found in it.
 *          If none found, return '\0'.
 * Input:   A string
 * Output:  The first uppercase character, or '\0' if not found
 */

#include <stdio.h>

char first_UpperCase (char *, int);

int main ()
{
    printf("First uppercase is: %c\n", first_UpperCase("RdX", 0));
    return 0;
}

char first_UpperCase (char * str, int n)
{
    if (*(str + n) == '\0') return '\0';
    
    if (*(str + n) >= 65 && *(str + n) <= 90) return *(str + n);
    
    return first_UpperCase(str, n + 1);
}