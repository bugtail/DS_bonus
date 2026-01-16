#include<stdio.h>
int main(){
    int x, y;
    scanf("%d", &x);
    for(int i = 0 ; i < x ; i++){
        scanf("%d", &y);
        if(50 <= y && y <= 70){
            printf("%d\n", y);
        }else{
            printf("100\n");
        }
    }

    return 0;
}