//Write a C program to print all natural numbers in reverse from n to 1 using for loop.//

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        printf("%d ", i);
    }
}