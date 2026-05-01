/* 2D Array 
1. Each student’s percentage
2. Find highest */

#include <stdio.h>

int main() {
    int students[3][5] = {
        {1,1,0,1,1},
        {1,0,0,1,0},
        {1,1,1,1,1}
    };

    int top = 0;
    float highest = 0;

    for(int i = 0; i < 3; i++) {
        int sum = 0;

        for(int j = 0; j < 5; j++) {
            sum += students[i][j];
        }

        float percentage = (sum * 100.0) / 5;
        printf("Student %d: %.2f\n", i+1, percentage);

        if(percentage > highest) {
            highest = percentage;
            top = i + 1;
        }
    }

    printf("Top Student: %d\n", top);

}
