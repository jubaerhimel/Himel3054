/* Attendance Summary */

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of days: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter attendance (1 = Present, 0 = Absent):\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int present = 0, absent = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 1)
            present++;
        else
            absent++;
    }

    float percentage = (present * 100.0) / n;

    printf("Present Days: %d\n", present);
    printf("Absent Days: %d\n", absent);
    printf("Attendance Percentage: %.2f\n", percentage);

    if(percentage >= 80)
        printf("Good Attendance\n");
    else
        printf("Low Attendance\n");
}