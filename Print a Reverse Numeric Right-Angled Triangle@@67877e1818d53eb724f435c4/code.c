#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input for number of rows

    for (int i = n; i >= 1; i--) {  // Rows decreasing
        for (int j = 1; j <= i; j++) {  // Print numbers from 1 to i
            printf("%d ", j);
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
