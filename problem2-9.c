#include<stdio.h>
int main(){
    int number, j;
    scanf("%d", &number);
    for(int i = 0 ; i < number ; i++){
        scanf("%d", &j);
        if(j > 31){
            printf("Value of more than 31\n");
        }else{
            printf("%lld\n", 1LL << j);
        }
    }
    return 0;
}