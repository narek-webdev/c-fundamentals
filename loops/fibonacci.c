/*
 * Problem: Print the Fibonacci number at a given index.
 * Input:   An integer index (n)
 * Output:  The nth Fibonacci number
*/

#include <stdio.h>

int main ()
{
int fibN = 0;
int next = 0;
int prev = 0;

    printf("Write fib n: ");
    scanf("%i", &fibN);

    while (fibN - 1) {
        if (next == 0 && prev == 0) {
            next = 1;
        } else if (prev == 0 && next == 1) {
            prev = 1;
            next = 1;
        } else {
            next = next + prev;
            prev = next - prev;
        }
        
        --fibN;
    }

    printf("%i", next);
    return 0;
}