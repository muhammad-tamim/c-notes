#include <stdio.h>

int main(void) {
    char name[101];

    scanf("%100s", name);

    printf("Hello, %s\n", name);

    return 0;
}