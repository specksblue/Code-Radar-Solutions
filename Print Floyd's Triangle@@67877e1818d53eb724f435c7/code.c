#include <stdio.h>

int main() {
    int n, num = 1;
    scanf("%d", &n); // Input for number of rows

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}

