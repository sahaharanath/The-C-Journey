#include <stdio.h>
int main () {

    int n;
    printf("Enter a number to print its multiplication table: ");
    scanf ("%d", &n);

    printf("The multiplication table of %d is...\n",n);
    for (int i=1;i<=10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    
    return 0;
}
