#include<stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d+%d=%d\n", x, y, x + y);
    printf("%d*%d=%d\n", x, y, x * y);
    printf("%d-%d=%d\n", x, y, x - y);
    if(x % y < 0){
        int a = (x - y) / y;
        printf("%d/%d=%d...%d\n", x, y, a, x - a * y);
    }else{
        printf("%d/%d=%d...%d\n", x, y, x / y, x % y);
    }
    return 0;
}