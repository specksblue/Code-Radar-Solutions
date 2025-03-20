#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input for number of rows

    for (int i = 1; i <= n; i++) {
        int num = (i % 2 == 0) ? 0 : 1; // Start with 1 for odd rows, 0 for even rows
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num; // Toggle between 1 and 0
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
