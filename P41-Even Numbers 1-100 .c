#include <stdio.h>
int main () {

    printf ("Even Numbers from 1 to 100: \n");
    for (int i=1;i<=100;i++) {
        if (i%2==0){
            printf("%d ", i);
        }
    }

    return 0;
}
