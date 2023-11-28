#include <stdio.h>
int main() {
    int num, power;

    printf("Enter the base number: ");
    scanf("%d", &num);

    printf("Enter the exponent (power): ");
    scanf("%d", &power);

    int result = 1;
    for (int i = 1; i <= power; i++) {
        result = result * num;
    }

    printf("%d raised to the power of %d is: %d\n", num, power, result);

    return 0;
}
