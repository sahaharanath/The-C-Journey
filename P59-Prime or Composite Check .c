#include <stdio.h>
int main () {

    int num;
    printf("Enter a number to determine whether it is prime or composite : ");
    scanf ("%d", &num);

    int check=0;

    for (int i=2;i<=num-1;i++){
        if (num%i==0){
            check=1;
        }
    }

    if (num==1){
        printf("%d is neither prime nor composite!",num);
    }
    else if (check==0){
        printf("%d is a prime number!",num);
    }
    else {
        printf("%d is a composite number!",num);
    }


    return 0;
}
