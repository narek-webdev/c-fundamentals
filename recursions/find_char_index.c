/*
 * Problem: Given a string and a character, find the index of the
 *          first occurrence of that character using recursion.
 *          If the character is not found, return -1.
 * Input:   A string and a character
 * Output:  The index of the first occurrence, or -1 if not found
 */

#include <stdio.h>

int firstAppear (const char *, char, int);

int main ()
{
    printf("Index: %i\n", firstAppear("eax", 'a', 0));

    return 0;
}

int firstAppear (const char * str, char ch, int n)
{
    if (*(str + n) == '\0') return -1;
    
    if (*(str + n) == ch) return n;
    
    return firstAppear(str, ch, n + 1);
}