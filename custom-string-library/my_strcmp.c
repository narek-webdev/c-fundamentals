/*
 * Function 1: my_strcmp
 * Prototype: int my_strcmp(const char *str1, const char *str2)
 * Description: Compares two strings lexicographically.
 *              Returns 0 if equal, negative if str1 < str2,
 *              positive if str1 > str2.
 * Equivalent to: strcmp() from <string.h>
 *
 * Function 2: my_strncmp
 * Prototype: int my_strncmp(const char *str1, const char *str2, size_t n)
 * Description: Compares the first n characters of str1 and str2
 *              lexicographically. Returns 0 if equal, negative if
 *              str1 < str2, positive if str1 > str2.
 * Equivalent to: strncmp() from <string.h>
 */

#include <stdio.h>

int my_strcmp (const char * str1, const char * str2);

int my_strncmp (const char * str1, const char * str2, size_t n);
int main ()
{
    printf("%i\n", my_strncmp("ebx", "ebx", 3));
    //printf("%i\n", my_strcmp("eax", "eax"));
    return 0;
}

int my_strncmp (const char * str1, const char * str2, size_t n)
{
    int x = 0;

    while (n != 0)
    {
        if (*(str1 + x) < *(str2 + x)) {
            return -1;
        } else if (*(str1 + x) > *(str2 + x)) {
            return 1;
        }

        --n;
        ++x;
    }

    return 0;
}

int my_strcmp (const char * str1, const char * str2)
{
    int n = 0;

    while (*(str1 + n) != '\0' || *(str2 + n) != '\0')
    {
        if (*(str1 + n) < *(str2 + n)) {
            return -1;
        } else if (*(str1 + n) > *(str2 + n)) {
            return 1;
        }
        
        ++n;
    }

    return 0;
}