/*
 * Problem: Given a square matrix, replace all elements in even-indexed
 *          rows with 0 and return the modified matrix.
 * Input:   A square matrix of size n×n
 * Output:  The matrix with even-indexed rows filled with zeros
*/

#include <stdio.h>
#define SIZE 3

void changeMatrixEvenIndexElems(int matrix[SIZE][SIZE]);

int main ()
{
    int matrix[SIZE][SIZE] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    changeMatrixEvenIndexElems(matrix);
    
    return 0;
}

void changeMatrixEvenIndexElems (int matrix[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (j % 2 == 0) {
                matrix[i][j] = 0;
            }
        }
    }
}