#include<stdio.h>
int main(){
    int n;
    double BMI;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        scanf("%lf", &BMI);
        if(BMI < 18.5){
            printf("體重過輕\n");
        } else if(BMI >= 18.5 && BMI < 24){
            printf("正常\n");
        } else if(BMI >= 24 && BMI < 28){
            printf("體重過重\n");
        } else if(BMI >= 28){
            printf("肥胖\n");
        }
    }
    return 0;
}