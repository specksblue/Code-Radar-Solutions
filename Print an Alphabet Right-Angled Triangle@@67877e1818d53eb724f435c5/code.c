#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input for number of rows

    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {  // Print letters from 'A' to 'A' + i - 1
            printf("%c ", ch);
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}

