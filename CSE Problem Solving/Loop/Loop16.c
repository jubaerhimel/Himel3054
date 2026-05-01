// Convert a decimal number to binary using while loop.

#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    while (i > 0) {
        printf("%d", binary[i - 1]);
        i--;
    }

    printf("\n");

}


