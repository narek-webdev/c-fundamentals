/*
 * Problem: Multiply two integers using only addition (+) and a loop,
 *          without the * operator.
 * Input:   Two integers (a, b)
 * Output:  The product of a and b (e.g. a=5, b=3 → 15)
*/

#include <stdio.h>

int main ()
{
    int x, y, sum = 0;

    printf("First number: ");
    scanf("%i", &y);

    printf("Second number: ");
    scanf("%i", &x);
    
    while (x) {
        sum += y;
        --x;
    }

    printf("Your sum is: %i\n", sum);
    
    return 0;
}