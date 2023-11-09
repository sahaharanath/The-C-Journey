#include <stdio.h>

int main() {
    float y, m, x, c, A;

    printf("Enter the value of y from the equation: ");
    scanf("%f", &y);
    printf("Enter the value of m from the equation: ");
    scanf("%f", &m);
    printf("Enter the value of x from the equation: "); 
    scanf("%f", &x);
    printf("Enter the value of c from the equation: ");
    scanf("%f", &c);

    A = (m * x) + c;
    if (A == y) {
        printf("This is an equation of a straight line!");
    } else {
        printf("This is not an equation of a straight line!");
    }

    return 0;
}
