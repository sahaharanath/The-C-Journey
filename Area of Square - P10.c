#include <stdio.h>
int main (){

    float side, area;

    printf("Enter the side of square: ");
    scanf("%f", &side);
    area=side*side;

    printf("The area of the square (Whose side is %f unit) is : %f square units" ,side,area);

    return 0;
}
