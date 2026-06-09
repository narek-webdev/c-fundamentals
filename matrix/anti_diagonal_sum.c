/*
 * Problem: Calculate and return the sum of elements on the
 *          anti-diagonal (secondary diagonal) of a square matrix.
 * Input:   A square matrix of size n×n
 * Output:  The sum of the anti-diagonal elements
*/

#include <stdio.h>
#define SIZE 4

int countDiagonalNums (int matrix[SIZE][SIZE]);

int main ()
{
    int matrix[SIZE][SIZE] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
    
    printf("%i\n", countDiagonalNums(matrix));
    
    return 0;
}

int countDiagonalNums (int matrix[SIZE][SIZE])
{
    int sum = 0;
    
    int j = SIZE - 1;
    
    for (int i = 0; i < SIZE; ++i) {
        sum += matrix[i][j];
        --j;
    }
    
    return sum;
}