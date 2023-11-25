// Display this GP upto nth terms. (2,4,8,16,32,64..._)

#include<stdio.h>
#include<math.h>

int main (){
    int n;
    printf ("Enter n to print the GP upto nth terms : ");
    scanf("%d",&n);

    // Initialize variables for the first term, common difference, and last term.
    int first_term=2;
    int difference=2;
    // Calculate the last term of the GP
    int last_term = first_term*pow(difference,(n-1));

    // Loop to print the terms of the GP
    for (int i=first_term;i<=last_term;i=i*difference){ // for(int i=1;i<=last_term;i=i*2)
        printf ("%d ",i);
    }

    return 0;
}
