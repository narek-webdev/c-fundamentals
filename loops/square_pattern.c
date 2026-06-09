/*
 * Problem: Read an integer n from the user and print a
 *          filled square pattern of size n x n using '*'.
 * Input:   An integer n
 * Output:  A square pattern with side length n
*/

#include <stdio.h>

int main ()
{
    int n = 0;

    printf("Write a number: ");
    scanf("%i", &n);

    printf("\n");
    
    for (int i = 1; i <= n; ++i) {        
        for (int j = 1; j <= n; ++j) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}