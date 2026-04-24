/* Tasks:
1. Count total present and absent days
2. Calculate attendance percentage
3. Check if student is eligible (≥ 75%) */

#include <stdio.h>

int main() {
    int attendance[] = {1,1,0,1,0,1,1};
    int n = 7;

    int present = 0, absent = 0;

    for(int i = 0; i < n; i++) {
        if(attendance[i] == 1)
            present++;
        else
            absent++;
    }

    float percentage = (present * 100.0) / n;

    printf("Present: %d\n", present);
    printf("Absent: %d\n", absent);
    printf("Percentage: %.2f\n", percentage);

    if(percentage >= 75)
        printf("Eligible\n");
    else
        printf("Not Eligible\n");
}

