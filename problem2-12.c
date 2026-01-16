#include<stdio.h>
int main(){
    int number;
    scanf("%d", &number);
    int ten = 0, five = 0, one = 0;
    ten = number / 10;
    five = (number % 10) / 5;
    one = number % 5;

    printf("NT10=%d\n", ten);
    printf("NT5=%d\n", five);
    printf("NT1=%d\n", one);
    return 0;
}