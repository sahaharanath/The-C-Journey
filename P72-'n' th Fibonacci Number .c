#include <stdio.h>
int main() {

    // Declare variables
    int n;
    printf("Enter the position (n) to find the nth Fibonacci number: ");
    scanf("%d", &n);

    // Initialize the first two Fibonacci numbers
    int a = 1;
    int b = 1;
    int sum = 0;

    // Calculate the nth Fibonacci number using a loop
    for (int i = 1; i <= n - 2; i++) {

        // Calculate the sum of the last two Fibonacci numbers
        sum = a + b;
        // Update values for the next iteration
        a = b;
        b = sum;
    }

    // Print the result
    printf("The '%d' th fibonacci number is : %d", n, sum);

    return 0;
}
