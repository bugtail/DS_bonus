#include<stdio.h>
int main() {
    int number;
    double length, area;
    scanf("%d", &number);
    for(int i = 0 ; i < number ; i++){
        scanf("%lf", &length);
        area = length * length;
        printf("%.1lf\n", area + 1e-9);
    }
    return 0;
}