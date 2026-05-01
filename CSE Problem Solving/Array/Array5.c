//Count how many even and odd numbers are in array.

#include <stdio.h>

int main() {
    int n, i = 0;
    int arr[100];
    int even = 0, odd = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;

        i++;
    }

    printf("Even = %d, Odd = %d\n", even, odd);

}
