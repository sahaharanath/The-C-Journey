#include <stdio.h>
int main (){

    int num1,num2,num3;
    printf("Enter 1st number : ");
    scanf ("%d", &num1);
    printf("Enter 2nd number : ");
    scanf ("%d", &num2);
    printf("Enter 3rd number : ");
    scanf ("%d", &num3);

   if (num1>num2 && num1>num3){
        printf("The first number %d is largest",num1);
    }

   else if (num2>num1 && num2>num3){
        printf("The second number %d is largest",num2);
    }

   else if (num3>num1 && num3>num2){
       printf("The third number %d is largest",num3);
   }

   else {
        printf("All the numers are equal!");
    }


    return 0;
}
