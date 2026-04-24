/*A teacher wants a program to evaluate exam results:
• Pass if marks 40
• If marks 80 → Distinction
• If marks 40 and ¡ 80 → Pass
• If marks ¡ 40 → Fail
Write a C program to implement this grading system.*/

#include <stdio.h>

int main() {
    int n, marks, i;
    int pass = 0, fail = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter marks of student %d: ", i);
        scanf("%d", &marks);

        if(marks >= 40)
            pass++;
        else
            fail++;
    }

    printf("Number of students passed = %d\n", pass);
    printf("Number of students failed = %d\n", fail);

    return 0;
}