/*
 * Function 1: my_strcpy
 * Prototype: char* my_strcpy(char *dest, const char *src)
 * Description: Copies the string pointed to by src into dest,
 *              including the null terminator. Returns a pointer to dest.
 * Equivalent to: strcpy() from <string.h>
 *
 * Function 2: my_strncpy
 * Prototype: char* my_strncpy(char *dest, const char *src, size_t n)
 * Description: Copies the first n characters of src into dest.
 *              If src is shorter than n, fills remaining bytes with '\0'.
 *              Returns a pointer to dest.
 * Equivalent to: strncpy() from <string.h>
 */

#include <stdio.h>

const char * my_strcpy (char * dest, const char * src);
const char * my_strncpy (char * dest, const char * src, size_t n);

int main ()
{
    char p1[50] = "";
    
    const char p2[50] = "example";
    
    //my_strcpy(p1, p2);
    
    my_strncpy(p1, p2, 4);
    
    printf("%s\n", p1);
    
    return 0;
}

const char * my_strncpy (char * dest, const char * src, size_t n)
{
    int x = 0;

    while (n != 0) {
        *(dest + x) = *(src + x);
        ++x;
        --n;
    }

    return dest;
}

const char * my_strcpy (char * dest, const char * src)
{
    int n = 0;
    
    while (*(src + n) != '\0')
    {
        *(dest + n) = *(src + n);
        ++n;
    }
    
    return dest;
}