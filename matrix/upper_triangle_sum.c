/*
 * Problem: Calculate and return the sum of all elements on and above
 *          the main diagonal of a square matrix.
 * Input:   A square matrix of size n×n
 * Output:  The sum of the upper triangular elements (including diagonal)
 */

#include <stdio.h>
#define SIZE 3

int matrixSum (int matrix[SIZE][SIZE]);

int main () {
    int matrix[SIZE][SIZE] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    
    printf("Summary is: %i\n", matrixSum(matrix));
    
    return 0;
}

int matrixSum (int matrix[SIZE][SIZE])
{
    int sum = 0;
    
    for (int i = 0; i < SIZE; ++i) {
        sum += matrix[i][i];

        for (int j = i + 1; j < SIZE; ++j) {
            sum += matrix[i][j];
        }
    }

    return sum;
}