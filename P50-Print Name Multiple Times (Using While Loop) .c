#include <stdio.h>
int main () {

    int n;
    printf("Enter n to print your name 'n' times : ");
    scanf ("%d", &n);

    int i=1;
    while (n>=i){
        printf ("Your Name Here! \n");
        i++;
    }
    
    return 0;
}
