// 1/(n^2) + /(n^2) + 3/(n^2) + 4/(n^2) + ... + n/(n^2)
#include <stdio.h>
int main() {

    float n,sum=0;

    printf("We have to calculate this series : 1/(n^2) + 2/(n^2) + ... + n/(n^2) \n");
    printf("Enter the value of 'n' to calculate this : ");
    scanf("%f", &n);

    if (n==0){
        printf("Anything cannot be devided by 0");

    }
    else {
        for (int i=1;i<=n;i++) {
            sum = sum + (i / (n * n));
        }
        printf("The sum is %f",sum);
    }

  

    return 0;
}
