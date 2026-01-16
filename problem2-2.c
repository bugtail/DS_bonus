#include<stdio.h>
int main() {
    double up_base, down_base, height;
    double area;
    scanf("%lf %lf %lf", &up_base, &down_base, &height);
    area = (up_base + down_base) * height / 2;
    printf("Trapezoid area:%.1lf", area);
    return 0;
}