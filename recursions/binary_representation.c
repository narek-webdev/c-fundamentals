/*
 * Problem: Implement a recursive function that takes an integer N
 *          and prints its binary representation.
 * Input:   A non-negative integer N
 * Output:  The binary representation of N
 */

#include <stdio.h>

void print_binary (int);

int main ()
{
    print_binary(14);
    
    return 0;
}

void print_binary (int n)
{
    if (n == 0) return;
    
    print_binary(n / 2);
    
    printf("%i ", n % 2);
}