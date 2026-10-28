#include <stdio.h>

int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    int smallest = num1;
    if(num2 < smallest) {
        smallest = num2;
    }
    if(num3 < smallest) {
        smallest = num3;
    }

    int largest = num1;
    if(num2 > largest) {
        largest = num2;
    }
    if(num3 > largest) {
        largest = num3;
    }

    int middle = num1 + num2 + num3 - smallest - largest;

    printf("%d\n%d\n%d\n", smallest, middle, largest);
    printf("\n");
    printf("%d\n%d\n%d\n", num1, num2, num3);

    return 0;
}