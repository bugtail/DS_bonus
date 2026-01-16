#include<stdio.h>
int main(){
    int number;
    scanf("%d", &number);
    printf("%d,%d,%d,%d", number%10, number%100/10, number%1000/100, number/1000);
    return 0;
}