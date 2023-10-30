#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the value of 'A' : ");
    scanf ("%d", &a);
    printf("Enter the value of 'B' : ");
    scanf ("%d", &b);

    c=a+b;
    a=c-a;
    b=c-a;

    printf ("After swapping A=%d & B=%d", a,b);
    return 0;
}
