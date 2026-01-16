#include<stdio.h>
int main(){
    int n, number;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &number);
        if(90 <= number && number <= 100){
            printf("優等\n");
        }else if(80 <= number && number < 90){
            printf("甲等\n");
        }else if(70 <= number && number < 80){
            printf("乙等\n");
        }else if(60 <= number && number < 70){
            printf("丙等\n");
        }else{
            printf("不及格\n");
        }
    }
    return 0;
}