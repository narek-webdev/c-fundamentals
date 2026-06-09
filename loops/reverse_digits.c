/*
 * Problem: Print the digits of a given number in reverse order.
 * Input:   An integer
 * Output:  The digits of the number printed in reverse order
*/

#include <stdio.h>

int main ()
{
    int x = 0;
    
    printf("Write a number: ");
    scanf("%i", &x);

    while (x > 0) {
        printf("%i", x % 10);
        x = x / 10;
    }
    
    return 0;
}