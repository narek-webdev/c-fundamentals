/*
 * Problem: For each row in an N×M matrix, find the maximum value
 *          and store it in a 1D array of size N, where the i-th
 *          element equals the maximum value of the i-th row.
 * Input:   An N×M matrix
 * Output:  A 1D array of size N containing the max of each row
 */

#include <stdio.h>
#define n 2
#define m 3

int main ()
{
    int matrix[n][m] = { {7, 5, 3}, {5, 2, 55} };
    
    int arr[n];

    for (int i = 0; i < n; ++i) {
        int max = matrix[i][i];

        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        
        arr[i] = max;
    }

    return 0;
}