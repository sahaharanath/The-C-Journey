#include <stdio.h>
int main() {
    
    int num;

    printf("Enter a number to check whether it is a palindrome or not: ");
    scanf("%d", &num);

    int main_number = num;
    int remainder, reverse = 0;

    // Reverse the digits of the number
    while (num != 0) {
        remainder = num % 10;
        reverse = (reverse * 10) + remainder;
        num = num / 10;
    }

    int reversed_num = reverse;

    // Check if the original number is equal to its reversed version
    if (main_number == reversed_num) {
        printf("%d is a palindrome number!\n", main_number);
    } else {
        printf("%d is not a palindrome number!\n", main_number);
    }

    return 0;
}
