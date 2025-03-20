#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input for number of rows

    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
