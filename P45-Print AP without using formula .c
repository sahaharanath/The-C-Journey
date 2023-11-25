// Display this AP upto nth terms. (1,3,5,7,9..._)
#include<stdio.h>
int main (){
    int n;
    printf ("Enter n to print the AP upto nth terms : ");
    scanf("%d",&n);

    int difference=2;
    int a=1; //helping variable

    for (int i=1;i<=n;i++){ // for(int i=1;i<=last_term;i=i+2)
      printf ("%d ",a);
      a=a+2;
    }

    return 0;
}
