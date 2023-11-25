#include <stdio.h>
int main () {

    int print_time;

    printf ("Enter how many times to print your name : ");
    scanf ("%d", &print_time);

    for (int i=1;i<=print_time;i++){
        printf ("Your Name Here! \n");
    }


    return 0;
}
