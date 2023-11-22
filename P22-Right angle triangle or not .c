#include <stdio.h>
#include <math.h>

int main() {

    float height, base, hypotenuse, A,B,C,D;

    printf("Enter the height : ");
    scanf("%f", &height);
    printf("Enter the base : ");
    scanf("%f", &base);
    printf("Enter the hypotenuse : ");
    scanf("%f", &hypotenuse);

    A=pow(hypotenuse,2);
    B=pow(height,2);
    C=pow(base,2);
    D=B+C;

    if (A==D){
        printf("This is a right angle triangle!");
    }
    else {
        printf("This is not a right angle triangle!");
    }


    return 0;
}
