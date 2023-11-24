// C Program to check if a given year is a leap year or not

#include <stdio.h>

int main() {
    // Declare a variable to store the year
    int year;

    // Prompt the user to enter a year
    printf("Enter year: ");

    // Read the input year from the user
    scanf("%d", &year);

    // Check if the year is a leap year
    // Leap years are either divisible by 4 but not divisible by 100 or divisible by 400
    
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        printf("%d is a leap year!", year);
    } 
    
    else {
        printf("%d is not a leap year!", year);
    }

    return 0;
}
