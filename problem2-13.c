#include<stdio.h>
int main(){
    int w, h;
    scanf("%d %d", &w, &h);
    double BMI;
    printf("%.2lf\n", (double)w / ((double)h / 100 * (double)h / 100));
    return 0;
}