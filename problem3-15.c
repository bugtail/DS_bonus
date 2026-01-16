#include<stdio.h>
int main(){
    int number, count = 1;
    int sum = 0;
    int i = 3, x = 0;
    scanf("%d", &number);
    if(number == 1){
        printf("2\n");
        printf("2\n");
        return 0;
    }
    printf("2");
    sum += 2;
        while(count < number){
            for(int j = 1 ; j <= i ; j++){
                if(i % j == 0){
                    x++;
                }
            }
            if(x == 2){
                sum += i;
                count++;
                printf(",%d", i);
            }
            x = 0;
            i++;
        }
        printf("\n%d\n", sum);
    return 0;
}