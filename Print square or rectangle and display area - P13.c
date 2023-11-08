#include <stdio.h>
int main (){

    float length,width,area;

    printf("Enter the value of length: ");
    scanf("%f", &length);
    printf("Enter the value of width: ");
    scanf("%f", &width);

    area=length*width;
    if (length==width){
        printf("It's a square and the area is %f square units",area);
    }
    else if (length!=width){
        printf("It's a rectang and the area is %f square units",area);
    }


    return 0;
}
