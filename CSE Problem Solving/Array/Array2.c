/*A class attendance system records student attendance using an array, where:

* 1 represents “present”
* 0 represents “absent”

The attendance data is stored in the system for easy access and analysis.

Based on this data, write a program to:

1. Calculate the total number of students who are present and absent.
2. Determine the overall attendance percentage of the class.*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter attendance (1 = present, 0 = absent):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int present = 0, absent = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            present++;
        } else {
            absent++;
        }
    }

    float percentage = (present * 100.0) / n;

    printf("Total Present = %d\n", present);
    printf("Total Absent = %d\n", absent);
    printf("Attendance Percentage = %.2f%%\n", percentage);
}