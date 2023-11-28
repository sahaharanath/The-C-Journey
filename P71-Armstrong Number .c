#include <stdio.h>
#include <math.h>
int main () {

    // Declare variables
    int num;
    // Get user input
    printf("Enter the number you want to check for being an Armstrong Number: ");
    scanf("%d", &num);

    // Backup the original number for later comparison
    int backup1=num;
    int backup2=num;

    // Count the number of digits in the input number
    int count=0;
    while (num!=0){
        num=num/10;
        count++;
    }

    int individual_digit, sum=0;


    // Calculate the sum of digits raised to the power of count
    while (backup1!=0){

        // Extract the individual digit from the rightmost position
        individual_digit=backup1%10;

        // Add the digit raised to the power of count to the sum
        sum=sum+pow(individual_digit,count);

        // Move to the next digit by removing the rightmost digit
        backup1=backup1/10;
    }


    if (backup2==sum){
        printf("%d is a Armstrong Number",backup2);
    }
    else {
        printf("%d is not a Armstrong Number",backup2);
    }

    return 0;
}
