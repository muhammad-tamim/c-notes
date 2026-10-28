#include <stdio.h>

int main() {
    float x;
    scanf("%f", &x);

    double area = 3.141592653 * x * x; // pow(x, 2) = x * x

    printf("%.9lf\n", area);

    return 0;
} 