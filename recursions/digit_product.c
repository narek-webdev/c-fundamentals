/*
 * Problem: Implement a recursive function that takes an integer
 *          and returns the product of its digits.
 * Input:   An integer
 * Output:  The product of all digits
 */

#include <stdio.h>

long mul (int);

int main ()
{
    printf("%ld\n", mul(234));
    
    return 0;
}

long mul (int n)
{
    if (n == 0) return 1;
    
    return (n % 10) * mul(n / 10);
}