#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d + %d = %d\n", x, y, x + y); // 10^5 + 10^5 = 2*10^5 = 200000  
    printf("%d * %d = %lld\n", x, y, (long long int) x * y); // 10^5 * 10^5 = 10^10
    printf("%d - %d = %d\n", x, y, x - y); // 10^5 - 10^5 = 0

    return 0;
}