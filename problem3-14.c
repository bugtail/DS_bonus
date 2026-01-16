#include<stdio.h>
int main(){
    int number;
    scanf("%d", &number);
    for(int i = 1 ; i <= number ; i++){
        if(i % 2 == 0){
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}