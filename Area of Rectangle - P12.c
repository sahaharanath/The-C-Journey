#include <stdio.h>
int main (){

    float length,width,area;

    printf("Enter the value of length: ");
    scanf("%f", &length);
    printf("Enter the value of width: ");
    scanf("%f", &width);

    area=length*width;

    printf("The area of the rectangle (Whose length=%f unit, width=%f unit) is : %f square units" ,length,width,area);

    return 0;
}
