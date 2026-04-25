// Factorial //

#include <stdio.h>

int main() {
    int num, i;
    long long fact = 1; 
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num < 0) {
        printf("Factorial of negative number not possible.\n");
    } else {
        for(i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %lld\n", num, fact);
    }
   
}
