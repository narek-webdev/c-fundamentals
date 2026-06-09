/*
Set the 0th bit of a number to 1 using bitwise operators.
*/

#include <stdio.h>

int main ()
{
    int x;

    printf("Insert a number: ");
    scanf("%d", &x);
    
    printf("%d", x | 1);

    return 0;
}