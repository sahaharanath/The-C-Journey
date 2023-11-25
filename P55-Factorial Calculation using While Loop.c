#include <stdio.h>
int main () {

    int n;
    int temp=1;

    printf("Enter a number to find its factorial : ");
    scanf ("%d", &n);

    int i=1;
    while (n>=i){
        temp=temp*i;
        i++;
    }

    printf("The factorial of %d is %d",n,temp);


    return 0;
}
