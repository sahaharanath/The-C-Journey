#include <stdio.h>

int main() {
    int x = 5, y = 0;

    // Runtime error: Division by zero
    int result = x / y;
    printf("Runtime error example: %d\n", result);
    
    return 0;
}
