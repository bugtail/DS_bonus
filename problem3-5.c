#include<stdio.h>
int main(){
    int number;
    scanf("%d", &number);
    if(number < 10){
        printf("0%d\n", number * 100);
    }else if(number >= 10 && number < 30){
        printf("%d\n", number * 90);
    }else if(number >= 30 && number < 100){
        printf("%d\n", number * 80);
    }else{
        printf("%d\n", number * 70);
    }
    return 0;
}