// Your code here...#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows); // Input number of rows

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= 2; j++) { // 2 columns
            printf("* ");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}

