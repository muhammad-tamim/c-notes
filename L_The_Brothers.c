#include <stdio.h>

int main(void) {
    char firstName1[100000], secondName1[100000];
    char firstName2[100000], secondName2[100000];

    scanf("%s %s", firstName1, secondName1);
    scanf("%s %s", firstName2, secondName2);

    int i = 0;

    while (secondName1[i] != '\0' && secondName2[i] != '\0' && secondName1[i] == secondName2[i]) {
        i++;
    }

    if (secondName1[i] == secondName2[i]) {
        printf("ARE Brothers");
    } else {
        printf("NOT");
    }

    return 0;
}