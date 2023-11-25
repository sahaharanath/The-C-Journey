#include <stdio.h>

int main() {
    int num, sum = 0;

    // Infinite loop until the user enters -1
    while (1) {
        printf("Enter a number (Enter -1 to stop): ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        sum = sum + num;
    }

    printf("The sum of entered numbers is: %d", sum);

    return 0;
}
