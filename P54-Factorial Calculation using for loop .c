#include <stdio.h>
int main () {

    int n;
    int temp=1;

    printf("Enter a number to find its factorial : ");
    scanf ("%d", &n);

    for (int i=1;i<=n;i++){
    temp=temp*i;
    }

    printf("The factorial of %d is %d",n,temp);

    return 0;
}
