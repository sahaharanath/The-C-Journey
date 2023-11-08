#include<stdio.h>
int main(){
    
    float a,b,c;
    printf("Enter the value of 'a': ");
    scanf("%f",&a);
    printf("Enter the value of 'b': ");
    scanf("%f",&b);
    printf("Enter the value of 'c': ");
    scanf("%f",&c);
    
    float s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13;
    
    s1=(a*a)+(2*a*b)+(b*b);
    s2=(a*a)-(2*a*b)+(b*b);
    s3=(a+b)*(a-b);
    s4=(a*a)+(b*b)+(c*c)+(2*a*b)+(2*b*c)+(2*c*a);
    s5=(a*a)+(b*b)+(c*c)+(2*a*b)-(2*b*c)-(2*c*a);
    s6=(a*a)+(b*b)+(c*c)-(2*a*b)-(2*b*c)+(2*c*a);
    s7=(a*a)+(b*b)+(c*c)-(2*a*b)+(2*b*c)-(2*c*a);
    s8=(a*a)+(b*b)+(c*c)-(2*a*b)+(2*b*c)-(2*c*a);
    s9=(a*a*a)+(b*b*b)+((3*a*b)+(a+b));
    s10=(a*a*a)-(b*b*b)-((3*a*b)+(a-b));
    s11=(a+b)*((a*a)-(a*b)+(b*b));
    s12=(a-b)*((a*a)+(a*b)+(b*b));
    s13=(a*a*a)+(b*b*b)+(c*c*c)-(3*a*b*c);


    printf("S_1 : (a + b)^2 = %f\n", s1);
    printf("S_2 : (a - b)^2 = %f\n", s2);
    printf("S_3 : (a + b) * (a - b) = %f\n", s3);
    printf("S_4 : (a + b + c)^2 = %f\n", s4);
    printf("S_5 : (a - b + c)^2 = %f\n", s5);
    printf("S_6 : (a - b - c)^2 = %f\n", s6);
    printf("S_7 : (a + b - c)^2 = %f\n", s7);
    printf("S_8 : (b + c - a)^2 = %f\n", s8);
    printf("S_9 : (a + b)^3 = %f\n", s9);
    printf("S_10 : (a - b)^3 = %f\n", s10);
    printf("S_11 : (a + b) * (a^2 - ab + b^2) = %f\n", s11);
    printf("S_12 : (a - b) * (a^2 + ab + b^2) = %f\n", s12);
    printf("S_13 : a^3 + b^3 + c^3 - 3abc = %f\n", s13);

    return 0;
}
