/* Take N numbers from the user and count how many are even and how many are odd.*/

#include <stdio.h>

int main() {
    int n, num;
    int even = 0, odd = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &num);

        if(num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);

}