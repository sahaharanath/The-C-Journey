#include <stdio.h>
int main() {
    
    int num;
    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    // Read the user input and store it in the variable 'num'
    scanf("%d", &num);

    // Displaying the factors of the entered number
    printf("The factors of %d are: \n", num);

    // Iterate from 1 to the entered number to find factors
    for (int i = 1; i <= num; i++) {
        // Check if 'i' is a factor of 'num'
        if (num % i == 0) {
            // Print the factor
            printf("%d ", i);
        }
    }
    
    return 0;
}
