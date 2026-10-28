#include <stdio.h>

int main() {
    int days;
    scanf("%d", &days);

    int years = days / 365;
    int remainingDays = days % 365;
    int months = remainingDays / 30;
    remainingDays = remainingDays % 30;
    
    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", remainingDays);

    return 0;
}