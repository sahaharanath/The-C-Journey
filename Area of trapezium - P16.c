#include <stdio.h>

int main() {
    
    float height, length, width, area;

    printf("Enter the value of length of the trapezium: ");
    scanf("%f", &length);

    printf("Enter the value of height of the trapezium: ");
    scanf("%f", &height);

    printf("Enter the value of width of the trapezium: ");
    scanf("%f", &width);

    float sumOfLengths = length + width;
    float base = sumOfLengths / 2;
    area = base * height;

    printf("The area of the trapezium with height %f units, length %f units, width %f units is: %f square units\n", height, length, width, area);

    return 0;
}
