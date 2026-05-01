
#include <stdio.h>

int main() {
    int students, days;

    printf("Enter number of students: ");
    scanf("%d", &students);

    printf("Enter number of days: ");
    scanf("%d", &days);

    int arr[students][days];

    printf("Enter attendance:\n");
    for(int i = 0; i < students; i++) {
        for(int j = 0; j < days; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    float total = 0;

    for(int i = 0; i < students; i++) {
        int sum = 0;

        for(int j = 0; j < days; j++) {
            sum += arr[i][j];
        }

        total += (sum * 100.0) / days;
    }

    float avg = total / students;

    printf("Class Average: %.2f\n", avg);
}
