#include <stdio.h>

int main() {
    long long int n;
    scanf("%lld", &n);

    long long int summation1toN = n * (n + 1) / 2;

    printf("%lld", summation1toN);

    return 0;
}