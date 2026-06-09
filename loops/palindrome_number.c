/*
 * Problem: Check whether a given number is a palindrome
 *          and print the result.
 * Input:   An integer
 * Output:  "Palindrome" or "Not a palindrome"
*/

#include <stdio.h>

int main ()
{
    int x = 0;

    printf("Write a number: ");
    scanf("%i", &x);
    
    int rev = 0;
    int tmp = x;
    
    while (tmp) {
        rev = rev * 10 + tmp % 10;
        tmp /= 10;
    }

    if (x == rev) {
        printf("Palindrome number \n");
    } else {
        printf("Wrong number \n");
    }

    return 0;
}