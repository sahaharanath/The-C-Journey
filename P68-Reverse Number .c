#include <stdio.h>
int main() {
  
    int num, remainder, reverse = 0;

    printf("Enter a number to reverse it: ");
    scanf("%d", &num);

    int backup = num;

    // Reverse the digits of the number
    while (num != 0) {
        remainder = num % 10;
        reverse = (reverse * 10) + remainder;
        num = num / 10;
    }

    // Display the result
    printf("The reverse of %d is %d", backup, reverse);

    return 0;
}
