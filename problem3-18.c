#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int number;
    int countfor900 = 0, countfor600to700 = 0, sum = 0;
    double average;
    int max = -1;
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &number);
        sum += number;
        if(number >= 900){
            countfor900++;
        }
        if(number >= 600 && number <= 700){
            countfor600to700++;
        }
        if(number > max){
            max = number;
        }
    }
    average = (double)sum / n;
    printf("%d\n", max);
    printf("%d\n", countfor900);
    printf("%d\n", countfor600to700);
    printf("%.1lf\n", average);
    return 0;
}