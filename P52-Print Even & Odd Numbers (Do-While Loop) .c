#include <stdio.h>
int main () {

    //Even Numbers :
    printf("Even Numbers from 1 to 100 : \n");
    int i=1;
    do {
        if (i%2==0) {
            printf("%d ", i);
        }
        i++;
    }
    while (100>=i);

    printf("\n");

    //Odd Numbers :
    printf("Even Numbers from 1 to 100 : \n");
    int j=1;
    do {
        if (j%2!=0) {
            printf("%d ", j);
        }
        j++;
    }
    while (100>=j);


    return 0;
}
