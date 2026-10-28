#include <stdio.h>

int main() {
    int num1, num2, num3;
    char sign, sign2;
    scanf("%d %c %d %c %d", &num1, &sign, &num2, &sign2, &num3);

    if(sign == '+'){
        if(num1 + num2 == num3){
            printf("Yes");
        }
        else{
            printf("%d", num1 + num2);
        }
    }
    else if(sign == '-'){
        if(num1 - num2 == num3){
            printf("Yes");
        }
        else{
            printf("%d", num1 - num2);
        }
    }
    else if(sign == '*'){
        if(num1 * num2 == num3){
            printf("Yes");
        }
        else{
            printf("%d", num1 * num2);
        }
    }
    

    return 0;
}