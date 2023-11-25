#include <stdio.h>

int main() {
    int num, last_digit, sum = 0;

    printf("Enter a number to find the sum of its all digits: ");
    scanf("%d", &num);

    // Store the original value of num in backup
    int backup = num;

    // Calculate the sum of all digits
    while (num != 0) {
        last_digit = num % 10;
        sum = sum + last_digit;
        num = num / 10;
    }

    printf("The sum of all digits of %d is: %d", backup, sum);

    return 0;
}
