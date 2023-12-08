#include <stdio.h>

int main() {
    // Declare variables to store user-input numbers and the highest common factor
    int num1, num2;
    // Initialize the highest common factor to 1
    int hcf = 1;

    // Prompt the user to enter the numbers
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);


    // Iterate through all possible common factors up to the minimum of num1 and num2
    for (int i = 1; i <= num1 && i <= num2; i++) {
        // Check if i is a common factor of both num1 and num2
        if (num1 % i == 0 && num2 % i == 0) {
            // If i is a common factor, update the highest common factor
            hcf = i;
        }
    }

    // Print the result, indicating the highest common factor of num1 and num2
    printf("The highest common factor (HCF) of %d and %d is: %d", num1, num2, hcf);

    return 0;
}
