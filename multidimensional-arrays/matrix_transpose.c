/*
 * Problem: Implement a function that takes a square matrix and
 *          performs a symmetric reflection (transpose) along
 *          the main diagonal.
 * Input:   A square matrix of size n×n
 * Output:  The transposed matrix
*/

#include <stdio.h>
#define SIZE 3

int main ()
{
    int arr[SIZE][SIZE] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            printf(" %i ", arr[j][i]);
        }

        printf("\n");
    }
    
    return 0;
}