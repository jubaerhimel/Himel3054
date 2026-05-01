// Input a number and count: total digits, even digits, odd digits

#include <stdio.h>

int main() {
    int num, digit, total = 0, even = 0, odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        total++;

        if (digit % 2 == 0)
            even++;
        else
            odd++;

        num /= 10;
    }

    printf("Total digits: %d\n", total);
    printf("Even digits: %d\n", even);
    printf("Odd digits: %d\n", odd);

    return 0;
}
