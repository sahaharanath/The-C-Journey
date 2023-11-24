//Days to YMD converter
#include <stdio.h>

int main() {
    int total_days;
    
    // Input the total number of days
    printf("Enter days to convert: ");
    scanf("%d", &total_days);

    // Calculate years
    int years = total_days / 365;

    // Calculate the remaining days after considering years
    int temp = total_days % 365;

    // Calculate months from the remaining days
    int months = temp / 30;

    // Calculate days from the remaining days
    int days = temp % 30;

    // Output the result
    printf("%d days = %d year(s), %d month(s), %d day(s)", total_days, years, months, days);

    return 0;
}
