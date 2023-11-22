#include <stdio.h>
#include <math.h>

int main() {

    float first, second, third, S, B, A;

    printf("Enter the value of 1st side : ");
    scanf("%f", &first);
    printf("Enter the value of 2nd side : ");
    scanf("%f", &second);
    printf("Enter the value of 3rd side : ");
    scanf("%f", &third);

    S = (first + second + third) / 2;
    B = S * (S - first) * (S - second) * (S - third);
    A = sqrt(B);

    printf("The area of the triangle is %f square units!", A);

    return 0;
}
