/*
 * Problem: Swap the elements of the main diagonal and the anti-diagonal
 *          of a square matrix.
 * Input:   A square matrix of size n×n
 * Output:  The matrix with swapped diagonal elements
 */

#include <stdio.h>
#define SIZE 3

int main ()
{
    int matrix[SIZE][SIZE] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    
    for (int i = 0; i < SIZE; ++i) {
        int tmp = matrix[i][i];
        
        matrix[i][i] = matrix[i][SIZE - 1 - i];
        matrix[i][SIZE - 1 - i] = tmp;
    }

    return 0;
}