// C Program to determine the day of the week based on user input (using switch case)

#include <stdio.h>

int main() {
    int days;

    // Input a number between 1 and 7
    printf("Please enter a number to know the corresponding day of the week (1-7): ");
    scanf("%d", &days);

    // Check the value of 'days' and print the corresponding day using switch case
    switch (days) {
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.");
            break;
    }

    return 0;
}
