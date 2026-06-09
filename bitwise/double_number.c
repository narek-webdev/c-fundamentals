/*
 * Problem: Double a number using bitwise left shift operator
 * Input:   An integer
 * Output:  The number multiplied by 2
*/

#include <stdio.h>

int main ()
{
    int x = 0;
    
    printf("Insert number: ");
    scanf("%d", &x);

    printf("Double number is %d", x << 1);
    return 0;
}