#include <stdio.h>

int main() {
    float r;

    while (1) {
        
        // Prompt the user to enter the radius
        printf("Enter r (Enter 0 to stop): ");
        scanf("%f", &r);

        // Check if the entered radius is 0
        if (r == 0) {
            printf("Exiting the program.\n");
            break;
        }

        // Calculate and display the area only if the radius is not 0
        printf("The area is %f square units\n", 3.14 * r * r);
        
    }

    return 0;
}
