#include <stdio.h>
#include <math.h>

int main() {

    double KB, MB, GB, TB;

    printf("Enter the size in KB : ");
    scanf("%lf", &KB);

    MB = (KB / 1024);
    GB = (KB / (1024 * 1024));
    TB = (KB / (1024 * 1024 * 1024));

    printf("%lf KB = %lf MB\n", KB, MB);
    printf("%lf KB = %lf GB\n", KB, GB);
    printf("%lf KB = %lf TB\n", KB, TB);

    return 0;
}
