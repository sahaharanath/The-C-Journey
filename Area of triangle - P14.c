#include <stdio.h>
int main (){

    float base,height,area;

    printf("Enter the value of height of the triangle: ");
    scanf("%f", &height);
    printf("Enter the value of base of the triangle: ");
    scanf("%f", &base);

    area=0.5*height*base;
    printf("The area of the triangle with height %f unit & base %f unit is : %f ",height,base,area);


    return 0;
}
