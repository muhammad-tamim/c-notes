#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    float division = (float)num1 / (float)num2;

    if(num1 % num2 == 0){
        printf("floor %d / %d = %d\n", num1, num2, (int)division);    
        printf("ceil %d / %d = %d\n", num1, num2, (int)division);    
        printf("round %d / %d = %d\n", num1, num2, (int)division);    
    }
    else{
        printf("floor %d / %d = %d\n", num1, num2, (int)division);
        printf("ceil %d / %d = %d\n", num1, num2, (int)division + 1);
        if(division >= ((int)division + 0.5)) {
            printf("round %d / %d = %d\n", num1, num2, (int)division + 1);
        } 
        else {
            printf("round %d / %d = %d\n", num1, num2, (int)division);
        }
    }

    return 0;
}