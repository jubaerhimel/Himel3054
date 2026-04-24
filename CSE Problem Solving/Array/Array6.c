/* Warning System */

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of days: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter attendance (1/0):\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            count++;
            if(count == 3) {
                printf("Warning! 3 consecutive absences\n");
                return 0;
            }
        } else {
            count = 0;
        }
    }

    printf("No Warning\n");

}