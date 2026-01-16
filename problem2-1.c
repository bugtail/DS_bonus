#include<stdio.h>
int main() {
    double base, height;
    double area;
    scanf("%lf %lf", &base, &height);
    area = base * height / 2;
    printf("Triangle area:%.1lf", area);
    return 0;
}