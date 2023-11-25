#include <stdio.h>
int main () {
    
    printf("Odd Numbers : ");
    for (int i=1;i<=100;i++){
        if (i%2==0){
            continue;
        }
        printf("%d ",i);
    }

    printf("\n");
    
    printf("Even Numbers : ");
    for (int i=1;i<=100;i++){
        if (i%2!=0){
            continue;
        }
        printf("%d ",i);
    }

    return 0;
}
