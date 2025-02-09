#include <stdio.h>
#define pi 3.14
int main() {
    float a, area;
    scanf("%f", &a);
    area=pi*a*a;
    printf("Area: %.2f\n", &a);
    return 0;
}