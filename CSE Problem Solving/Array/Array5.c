/* Tasks:
Total present
Longest consecutive present */

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of days: ");
    scanf("%d", &n);

    int attendance[n];

    printf("Enter attendance (1/0):\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &attendance[i]);
    }

    int present = 0;
    int max = 0, current = 0;

    for(int i = 0; i < n; i++) {
        if(attendance[i] == 1) {
            present++;
            current++;
            if(current > max)
                max = current;
        } else {
            current = 0;
        }
    }

    printf("Present: %d\n", present);
    printf("Longest Streak: %d\n", max);

}