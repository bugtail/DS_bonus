#include<stdio.h>
int main(){
    int number;
    scanf("%d", &number);
    printf("%d\n%d\n%d\n%d", number/1000, number%1000/100, number%100/10, number%10);
    return 0;
}