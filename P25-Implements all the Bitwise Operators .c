#include <stdio.h>

int main() {

    int num1 = 5; // 0101 in binary
    int num2 = 3; // 0011 in binary

    // Bitwise AND Operator (&)
    int result_and = num1 & num2; // 0001 in binary
    printf("Bitwise AND: %d\n", result_and); // Output: 1

    // Bitwise OR Operator (|)
    int result_or = num1 | num2; // 0111 in binary
    printf("Bitwise OR: %d\n", result_or); // Output: 7

    // Bitwise XOR Operator (^)
    int result_xor = num1 ^ num2; // 0110 in binary
    printf("Bitwise XOR: %d\n", result_xor); // Output: 6

    // Bitwise NOT Operator (~)
    int result_not = ~num1; // 1010 in binary (two's complement of 0101)
    printf("Bitwise NOT: %d\n", result_not); // Output: -6

    // Left Shift Operator (<<)
    int result_left_shift = num1 << 1; // 1010 in binary (shifted left by 1)
    printf("Left Shift: %d\n", result_left_shift); // Output: 10

    // Right Shift Operator (>>)
    int result_right_shift = num1 >> 1; // 0010 in binary (shifted right by 1)
    printf("Right Shift: %d\n", result_right_shift); // Output: 2

    return 0;
}
