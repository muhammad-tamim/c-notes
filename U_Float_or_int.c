#include <stdio.h>

int main(void) {
    float x;
    scanf("%f", &x);

    int integerPart = x; // (int)x
    float decimalPart = x - integerPart;

    if (decimalPart == 0) {
        printf("int %d\n", integerPart);
    } 
    else {
        printf("float %d %.3f\n", integerPart, decimalPart);
    }

    return 0;
}