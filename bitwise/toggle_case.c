/*
 * Problem: Toggle character case (uppercase to lowercase and vice versa)
 *          using bitwise XOR operator
 * Input:   A letter character
 * Output:  The character with toggled case
*/

#include <stdio.h>

int main () {
    char ch;

    printf("Insert a character: ");
    scanf("%c", &ch);
    
    printf("Changed character is %c", ch ^ 32);
    return 0;
}