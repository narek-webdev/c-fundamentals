/*
 * Problem: Check whether a given number is prime
 *          and print the result.
 * Input:   An integer
 * Output:  "Prime" or "Not prime"
*/

#include <stdio.h>

int main ()
{
    int x = 0;
    int is_prime = 1;

    printf("Write your number: ");
    scanf("%i", &x);
    
    for (int i = 2; i < x; ++i) {
        if (x % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime) {
        printf("Your number is prime \n");
    } else {
        printf("Your number is not a prime \n");
    }
    
    return 0;
}