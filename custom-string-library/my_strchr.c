/*
 * Function: my_strchr
 * Prototype: char* my_strchr(const char *str, char c)
 * Description: Searches for the first occurrence of character c in
 *              string str. Returns a pointer to the character if found,
 *              otherwise returns NULL.
 * Equivalent to: strchr() from <string.h>
 */

 /*
 * Function: my_strrchr
 * Prototype: char* my_strrchr(const char *str, char c)
 * Description: Searches for the last occurrence of character c in
 *              string str. Returns a pointer to the character if found,
 *              otherwise returns NULL.
 * Equivalent to: strrchr() from <string.h>
 */

#include <stdio.h>

const char * my_strchr (const char * str, char c);
const char * my_strrchr (const char * str, char c);

int main ()
{
    const char * p = my_strrchr("eax", 'a');

    printf("%s\n", p);
    
    return 0;
}

const char * my_strrchr (const char * str, char c)
{
    int n = 0;
    int index = -1;
    
    while (*(str + n) != '\0')
    {
        if (*(str + n) == c) {
            index = n;
        }

        ++n;
    }

    if (index == -1) {
        return NULL;
    } else {
        return &str[index];
    }
}

const char * my_strchr (const char * str, char c)
{
    int n = 0;

    while (*(str + n) != '\0')
    {
        if (*(str + n) == c) {
            return &str[n];
        }
        
        ++n;
    }
    
    return NULL;
}