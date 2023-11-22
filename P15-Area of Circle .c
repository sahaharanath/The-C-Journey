#include <stdio.h>
int main (){

    float radius,area;

    printf("Enter the value of radius of the circle: ");
    scanf("%f", &radius);

    area=3.14159265359*radius*radius;
    printf("The area of the circle with radius %f unit is : %f square units ",radius,area);
    
    
    return 0;
}
