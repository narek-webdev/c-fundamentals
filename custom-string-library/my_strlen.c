/*
 * Function: my_strlen
 * Prototype: size_t my_strlen(const char* s1)
 * Description: Returns the length of the string s1,
 *              not including the null terminator '\0'.
 * Equivalent to: strlen() from <string.h>
 */

#include <stdio.h>

size_t my_strlen (const char * s1);

int main ()
{
    printf("String length is: %zu\n", my_strlen("example"));
    return 0;
}

size_t my_strlen (const char * s1)
{
    int n = 0;
   
    while (*(s1 + n) != '\0')
    {
        ++n;
    }
    
    return n;
}