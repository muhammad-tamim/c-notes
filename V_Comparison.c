#include <stdio.h>

int main() {
    int num1, num2;
    char sign;
    scanf("%d %c %d", &num1, &sign, &num2);

    if(sign == '<'){
        if(num1 < num2){
            printf("Right");
        }
        else{
            printf("Wrong");
        }
    }
    else if(sign == '>'){
        if(num1 > num2){
            printf("Right");
        }
        else{
            printf("Wrong");
        }
    }
    else if(sign == '='){
        if(num1 == num2){
            printf("Right");
        }
        else{
            printf("Wrong");
        }
    }

    return 0;
}