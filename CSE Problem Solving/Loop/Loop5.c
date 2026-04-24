//Write a C program to input a number from user and count number of digits in the given integer using loop. //

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        n = n / 10;
        count++;
    }

    printf("Number of digits = %d", count);

}