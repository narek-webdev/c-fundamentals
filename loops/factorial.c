/*
 * Problem: Calculate the factorial of a given number.
 * Input:   A non-negative integer
 * Output:  The factorial of the number (n!)
*/

#include <stdio.h>

int main ()
{
int x = 0;
int factorial = 1;

printf("Write a number: ");
scanf("%i", &x);

if (x == 0) {
    factorial = 1;
} else if (x < 0) {
    factorial = 0;
} else {
    for (int i = 1; i <= x; ++i) {
        factorial = factorial * i;
    }
}

printf("Factorial is: %i \n", factorial);

return 0;
}