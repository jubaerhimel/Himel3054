// Take an integer input. Reverse it using a while loop and check if it’s a palindrome (same forward & backward).

#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    if (original == reversed) {
        printf("Palindrome number\n");
    } else {
        printf("Not a palindrome\n");
    } }
