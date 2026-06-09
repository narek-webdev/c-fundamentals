/*
 * Problem: Build and print an n×n matrix filled with numbers 1 to n*n
 *          in a snake (zigzag) column order — top to bottom for odd
 *          columns, bottom to top for even columns.
 * Input:   An integer n
 * Output:  The n×n snake matrix
 * Example: n=4 → first column: 1,2,3,4 (top→bottom),
 *                second column: 8,7,6,5 (bottom→top), etc.
*/

#include <stdio.h>
#define SIZE 4

int main ()
{
    int arr[SIZE][SIZE] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
    int odd_index = 0;
    int even_index = SIZE - 1;

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            int target = !(j % 2) ? odd_index : even_index;
            printf(" %i ", arr[j][target]);
        }

        ++odd_index;
        --even_index;
        
        printf("\n");
    }

    return 0;
}