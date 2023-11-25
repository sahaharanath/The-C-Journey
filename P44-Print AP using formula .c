// Display this AP upto nth terms. (1,3,5,7,9..._)

#include<stdio.h>
int main (){
    int n;
    printf ("Enter n to print the AP upto nth terms : ");
    scanf("%d",&n);

    // Initialize variables for the first term, common difference, and last term
    int first_term=1;
    int difference=2;

    // Calculate the last term of the AP
    int last_term = first_term+((n-1)*difference);

    // Loop to print the terms of the arithmetic progression (AP)
    for (int i=first_term;i<=last_term;i=i+difference){ // for(int i=1;i<=last_term;i=i+2)
      printf ("%d ",i);
    }

    return 0;
}
