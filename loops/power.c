/*
 * Problem: Calculate base raised to the power of exponent (base^exponent)
 *          using a loop, without math library functions.
 * Input:   Two integers: base and exponent
 * Output:  The result of base^exponent
*/

#include <stdio.h>

int main ()
{
    int base, exponent = 0;
    int sum = 1;
    
    printf("Write base: ");
    scanf("%i", &base);
    
    printf("Write exponent: ");
    scanf("%i", &exponent);
    
    while (exponent) {
        sum *= base;
        --exponent;
    }

    printf("Sum is: %i\n", sum);
    
    return 0;
}