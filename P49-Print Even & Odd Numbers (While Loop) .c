#include <stdio.h>
int main () {

    printf("Even Numbers from 1 to 100 : \n");
    int i=1;
    while (100>=i){
        if (i%2==0){
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");

    printf("Odd Numbers from 1 to 100 : \n");
    int j=1;
    while (100>=j){
        if (j%2!=0){
            printf("%d ", j);
        }
        j++;
    }




    return 0;
}
