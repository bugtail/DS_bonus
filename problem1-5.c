#include<stdio.h>
int main(){
    int number, time, divider;
    divider = 10000;
    scanf("%d", &number);
    for(int i = 0 ; i < 5 ; i++){
        time = number / divider;
        number %= divider;
        divider /= 10;
        for(int j = 0 ; j < time ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}