/*
 * Problem: Check if the digits of a given number form an arithmetic progression.
 * Input:   An integer n
 * Output:  "true" or "false"
*/

#include <stdio.h>
int main ()
{
    int n = 0;

    int op1 = 0;
    int op2 = 0;

    int b = 0;

    int res = 1;

    printf("Print your number: ");
    scanf("%i", &n);
    
    op1 = n % 10;
    n /= 10;
    
    op2 = n % 10;
    n /= 10;

    b = op1 - op2;

    while (n) {
        op1 = op2;
        op2 = n % 10;
        if (op1 - op2 != b) {
        res = 0;
        break;
        }
        n /= 10;
    }

    if (res) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
