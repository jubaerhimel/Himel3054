// Computer has a fixed number (say 50). User keeps guessing until correct

#include <stdio.h>

int main() {
    int guess, target = 50;

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == target) {
            printf("Correct guess!\n");
            break;
        } 
        else if (guess < target) {
            printf("Too low!\n");
        } 
        else {
            printf("Too high!\n");
        }
    } }
