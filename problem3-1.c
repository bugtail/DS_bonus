#include<stdio.h>
int main(){
    int number;
    scanf("%d", &number);
    if(number > 0){
        printf("正數\n");
    }else if(number < 0){
        printf("負數\n");
    }else{
        printf("0\n");
    }
    return 0;
}