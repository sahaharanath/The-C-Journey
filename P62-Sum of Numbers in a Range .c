#include <stdio.h>
int main() {
    
    int start_point, end_point, sum = 0;

    printf("Enter starting point: ");
    scanf("%d", &start_point);

    printf("Enter ending point: ");
    scanf("%d", &end_point);

    // Calculate the sum of numbers in the specified range using a for loop
    for (int i = start_point; i <= end_point; i++) {
        sum = sum + i;
    }

    printf("The sum of numbers from %d to %d is: %d", start_point, end_point, sum);

    return 0;
}
