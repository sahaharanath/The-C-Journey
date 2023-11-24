#include <stdio.h>

int main() {
    int x, y;

    // Semantics error: Using uninitialized variables
    int result = x + y;
    printf("Semantics error example: %d\n", result);

    return 0;
}
