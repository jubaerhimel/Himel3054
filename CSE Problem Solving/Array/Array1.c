/*Reverse the array elements..*/

#include <stdio.h>

int main() {
    int n, i = 0, temp;
    int arr[100];

    printf("Enter size: ");
    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &arr[i]);
        i++;
    }

    i = 0;
    while (i < n / 2) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
        i++;
    }

    printf("Reversed array: ");
    i = 0;
    while (i < n) {
        printf("%d ", arr[i]);
        i++;
    }

}
