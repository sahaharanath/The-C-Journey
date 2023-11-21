#include <stdio.h>
int main (){

    float rupees,euro,ruble,yen;

    printf("Enter the amount in Rupees: ");
    scanf("%f", &rupees);\

    printf("Disclaimer - Result based on currency exchange rates as of 07/11/23");
    printf("\n");

    printf("%f Rupees is = %f Dollars\n", rupees*0.012);
    printf("%f Rupees is = %f Euro\n", rupees*0.011);
    printf("%f Rupees is = %f Ruble\n", rupees*1.10);
    printf("%f Rupees is = %f Yen\n", rupees*1.81);

    return 0;
}
