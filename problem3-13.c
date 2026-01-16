#include<stdio.h>
int main(){
    int number;
    int hundred, ten, one;
    scanf("%d", &number);
    hundred = number / 100;
    ten = (number % 100) / 10;
    one = number % 10;
    printf("百元 %d\n", hundred);
    printf("十元 %d\n", ten);
    printf("壹元 %d\n", one);
    return 0;
}