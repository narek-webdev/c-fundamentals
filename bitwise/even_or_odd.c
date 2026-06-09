/*
 * Problem: Check if a positive integer is even or odd using bitwise operators
 * Input:   A positive integer
 * Output:  "Even" or "Odd"
*/

#include <stdio.h>

int main ()
{
    int x = 0;
    
    printf("Insert number: ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("Insert a positive number");
    } else {
        if (x & 1) {
            printf("Odd");
        } else {
            printf("Even");
        }
    }

    return 0;
}