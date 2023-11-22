#include <stdio.h>
#include <math.h>

int main() {
    float x1,x2,y1,y2, A,B, C;

    printf("Enter the value of x1 : ");
    scanf("%f", &x1);
    printf("Enter the value of y1 : ");
    scanf("%f", &y1);
    printf("Enter the value of x2 : ");
    scanf("%f", &x2);
    printf("Enter the value of y2 : ");
    scanf("%f", &y2);
    
    A=(x2-x1);
    B=(y2-y1);
    
    C=pow(A,2)+pow(B,2);

    printf("The distance between (%f,%f) & (%f,%f) is : %f unit",x1,y1,x2,y2,C);
    
    return 0;
}
