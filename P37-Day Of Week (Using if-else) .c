#include <stdio.h>
int main() {
    int days;

    // Input a number between 1 and 7
    printf("Please enter a number to know the corresponding day of the week (1-7): ");
    scanf("%d", &days);

    // Check the value of 'days' and print the corresponding day
    if (days == 1) {
        printf("Sunday");
    }
    else if (days == 2) {
        printf("Monday");
    }
    else if (days == 3) {
        printf("Tuesday");
    }
    else if (days == 4) {
        printf("Wednesday");
    }
    else if (days == 5) {
        printf("Thursday");
    }
    else if (days == 6) {
        printf("Friday");
    }
    else if (days == 7) {
        printf("Saturday");
    }
    else {
        printf("Invalid input! Please enter a number between 1 and 7.");
    }

    return 0;
}
