#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows); // Taking input for number of rows

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
            if (j < i) { // To avoid extra space at the end
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
