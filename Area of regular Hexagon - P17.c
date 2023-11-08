#include <stdio.h>
#include <math.h>
int main() {

    float side,area;

    printf("Enter the value of side of the hexagon: ");
    scanf("%f", &side);

    area=(3*sqrt(3)*pow(side,2))/2 ;

    printf("The area of the hexagon with side %f units is: %f square units\n", side, area);

    return 0;
}
