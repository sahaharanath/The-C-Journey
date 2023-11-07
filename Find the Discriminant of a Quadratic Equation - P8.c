#include <stdio.h>
int main (){

    float A,B,C,X;

    printf("We know discriminant of quadratic equation is b^2-4a*c\n");
    printf ("Ener the value of 'a' : \n");
    scanf ("%f", &A);
    printf ("Ener the value of 'b' : \n");
    scanf ("%f", &B);
    printf ("Ener the value of 'c' : \n");
    scanf ("%f", &C);

    X=(B*B)-(4*A*C);

    printf("The discriminant of quadratic equation having a=%f,b=%f,c=%f is : %f\n",A,B,C,X);

    return 0;
}
