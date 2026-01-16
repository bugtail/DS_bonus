#include<stdio.h>
int main(){
    int number, max, x;
    scanf("%d", &number);
    scanf("%d", &x);
    max = x;
    for(int i = 1 ; i < number ; i++){
        scanf("%d", &x);
        if(x > max){
            max = x;
        }
    }
    printf("%d\n", max);
    return 0;
}