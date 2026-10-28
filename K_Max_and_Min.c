#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int min = a;

    if(min > b) {
        min = b;
    }
    if(min > c) {
        min = c;
    }

    int max = a;
    
    if(max < b) {
        max = b;
    }
    if(max < c) {
        max = c;
    }

    printf("%d %d",min, max);

    return 0;
}