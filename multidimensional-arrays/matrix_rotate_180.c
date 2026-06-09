/*
 * Problem: Rotate a square matrix by 180 degrees.
 * Input:   A square matrix of size n×n
 * Output:  The matrix rotated 180 degrees
*/

#include <stdio.h>
#define SIZE 4

int main ()
{
    int arr[SIZE][SIZE] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
    
    for (int i = SIZE - 1; i >= 0; --i) {
        for (int j = SIZE - 1; j >= 0; --j) {
            printf(" %i ", arr[i][j]);
        }

        printf("\n");
    }
    return 0;
}