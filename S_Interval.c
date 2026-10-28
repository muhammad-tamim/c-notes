#include <stdio.h>

int main() {
    float interval;
    scanf("%f", &interval);

    if(interval >= 0 && interval <= 25){
        printf("Interval [0,25]\n");
    }
    else if(interval > 25 && interval <= 50){
        printf("Interval (25,50]\n");
    }
    else if(interval > 50 && interval <= 75){
        printf("Interval (50,75]\n");
    }
    else if(interval > 75 && interval <= 100){
        printf("Interval (75,100]\n");
    }
    else{
        printf("Out of Intervals\n");
    }

    return 0;
}