#include<stdio.h>
int main(){
    int number;
    int x;
    scanf("%d", &number);
    for(int i = 0 ; i < number ; i++){
        scanf("%d", &x);
        printf("%d %d %d\n", x, x * x, x * x * x); 
    }
    return 0;
}