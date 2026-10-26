#include <stdio.h>

int main() {
    int age;
    char ch;
    char name[50];

    printf("Enter your age: ");
    scanf("%d", &age);

    // Clear the newline left by scanf()
    getchar();

    printf("Enter a character: ");
    ch = getchar();

    // Clear the newline left by getchar()
    getchar();

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    puts("\nYour information:");
    printf("Age: %d\n", age);

    printf("Your character is: ");
    putchar(ch);
    putchar('\n');

    printf("Name: ");
    fputs(name, stdout);

    return 0;
}