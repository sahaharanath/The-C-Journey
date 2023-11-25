#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number to count its digits: ");
    scanf("%d", &num);

    // Store the original value of num in temp
    int temp = num;

    // Count the number of digits
    while (num != 0) {
        num = num / 10;
        count++;
    }

    printf("The number of digits in %d is %d", temp, count);

    return 0;
}
