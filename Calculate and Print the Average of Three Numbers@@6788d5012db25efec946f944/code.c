#include <stdio.h>

int main() 
{
    int num1, num2, num3;
    float avg;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    avg = (num1 + num2 + num3) / 3.0; // Use 3.0 to force floating-point division

    printf("Average: %.2f\n", avg);

    return 0;
}
