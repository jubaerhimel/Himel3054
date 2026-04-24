/* Find Weak Students */

#include <stdio.h>

int main() {
    int students, days;

    printf("Enter students: ");
    scanf("%d", &students);

    printf("Enter days: ");
    scanf("%d", &days);

    int arr[students][days];

    printf("Enter attendance:\n");
    for(int i = 0; i < students; i++) {
        for(int j = 0; j < days; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < students; i++) {
        int sum = 0;

        for(int j = 0; j < days; j++) {
            sum += arr[i][j];
        }

        float percentage = (sum * 100.0) / days;

        if(percentage < 60)
            printf("Student %d is weak\n", i+1);
    }

}