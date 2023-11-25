#include <stdio.h>
int main () {
    
    char ch;
    printf("Enter a character : ");
    scanf ("%c", &ch);

    int n;
    printf("Enter how many times do you want to print '%c' : ",ch);
    scanf ("%d", &n);

    for (int i=1;i<=n;i++){
        printf("%c\n",ch);
    }
    
    
    return 0;
}
