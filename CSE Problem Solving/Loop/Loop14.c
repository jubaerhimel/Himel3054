//User has 3 attempts to enter correct password . After that, block access.

#include <stdio.h>

int main() {
    int password, attempts = 0;

    while (attempts < 3) {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password == 1234) {
            printf("Access Granted\n");
            return 0;
        } else {
            printf("Wrong password\n");
        }

        attempts++;
    }

    printf("Access Denied\n");

    return 0;
}
