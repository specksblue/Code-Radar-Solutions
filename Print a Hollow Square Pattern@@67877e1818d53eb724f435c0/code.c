#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input for square size

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print stars on the boundary (first/last row or first/last column)
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" "); // Print spaces inside
            }
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
