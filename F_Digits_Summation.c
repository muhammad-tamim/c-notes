#include <stdio.h>

int main() {
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    int lastDigitOfA = a % 10;
    int lastDigitOfB = b % 10;

    int sum = lastDigitOfA + lastDigitOfB;

    printf("%d", sum);

    return 0;
}