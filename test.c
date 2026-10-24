#include <stdio.h>

void fun(char str[], int size){ 
    for(int i = 0; i < size; i++){
        printf("%c", str[i]); // Hello
    }

}   

int main(){
    char str[5] = "Hello";
    int size = sizeof(str) / sizeof(char); // 5 / 1 = 5
    fun(str, size);
}