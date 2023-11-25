// Display this GP upto nth terms. (2,4,8,16,32,64..._)
#include<stdio.h>
int main (){
    int n;
    printf ("Enter n to print the GP upto nth terms : ");
    scanf("%d",&n);

    int difference=2;
    int a=2; //helping variable

    for (int i=1;i<=n;i++){   // for(int i=1;i<=n;i++)
        printf ("%d ",a);
        a=a*2;
    }

    return 0;
}
