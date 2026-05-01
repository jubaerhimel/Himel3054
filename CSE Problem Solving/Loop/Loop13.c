//A Strong number = sum of factorial of digits equals the number

#include <stdio.h>

int main() {
    int num, original, digit, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        fact = 1;

        i = 1;
        while (i <= digit) {
            fact *= i;
            i++;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == original)
        printf("Strong number\n");
    else
        printf("Not a strong number\n");
        
        }
