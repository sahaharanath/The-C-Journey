#include <stdio.h>

int main() {
    // Declare a variable to store the user's choice
    char ch;

    // Prompt the user to enter 'C' or 'c' for capital letters, 'S' or 's' for small letters
    printf("Enter 'C' or 'c' for capital letters and 'S' or 's' for small letters with ASCII values: ");
    
    // Read the user's choice
    scanf("%c", &ch);

    // Check if the user chose capital letters
    if (ch == 'c' || ch == 'C') {
        printf("Alphabet from 'A' to 'Z' with ASCII values:\n");
        
        // Use a for loop to iterate over the uppercase letters
        for (ch = 'A'; ch <= 'Z'; ch++) {
            printf("%c -> %d\n", ch, ch);
        }
    }
    // Check if the user chose small letters
    else if (ch == 's' || ch == 'S') {
        printf("Alphabet from 'a' to 'z' with ASCII values:\n");
        
        // Use a for loop to iterate over the lowercase letters
        for (ch = 'a'; ch <= 'z'; ch++) {
            printf("%c -> %d\n", ch, ch);
        }
    }

    // Indicate successful completion of the program
    return 0;
}
