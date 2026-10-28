#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    long long int multiplication = (long long int)num1 * num2 * num3 * num4;

    // Print the last two digits of the multiplication
    printf("%lld\n", multiplication % 100);

    return 0;
}