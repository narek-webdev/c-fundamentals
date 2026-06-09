/*
 * Problem: Implement a recursive function that takes an array
 *          and returns its minimum element.
 * Input:   An integer array and its size
 * Output:  The minimum element of the array
 */

#include <stdio.h>
#define SIZE 3

int min (int arr[SIZE], int, int, int);

int main ()
{
    int arr[SIZE] = {2, 1, 3};
    
    printf("Min value is: %i\n", min(arr, SIZE, 0, arr[0]));
    
    return 0;
}

int min (int arr[], int size, int count, int k)
{
    if (size == count) return k;
    
    return min(arr, size, count + 1, arr[count] < k ? arr[count] : k);
}