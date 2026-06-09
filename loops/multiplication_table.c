/*
 * Problem: Print the multiplication tables for numbers 1 through 10.
 * Input:   None
 * Output:  Multiplication tables from 1 to 10
*/

#include <stdio.h>

int main ()
{
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 9; ++j) {
            printf("%i * %i = %i \n", i, j, i * j);
        }
        
        printf("\n");
    }

    return 0;
}