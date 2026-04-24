//Write a C program to print all natural numbers from 1 to n using loop.//

#include <stdio.h>

int main() {
    int n,i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

}