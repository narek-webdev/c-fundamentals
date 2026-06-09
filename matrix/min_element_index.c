/*
 * Problem: Find the index (row, column) of the minimum value
 *          in an N×M matrix and print it.
 * Input:   An N×M matrix
 * Output:  The row and column index of the minimum element
 */

#include <stdio.h>
#define n 2
#define m 3

int main ()
{
    int matrix[n][m] = { {55, 1, 54}, {4, 5, 6} };

    int minRowIndex = 0;
    int minColumnIndex = 0;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] < matrix[minRowIndex][minColumnIndex]) {
                minColumnIndex = j;
                minRowIndex = i;
            }
        }
    }

    printf("The row index is %i, column index is %i\n", minRowIndex, minColumnIndex);
    
    return 0;
}