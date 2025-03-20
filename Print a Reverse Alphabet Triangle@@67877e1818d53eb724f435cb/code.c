#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input for number of rows

    for (int i = n; i >= 1; i--) { // Outer loop for rows
        for (char ch = 'A'; ch < 'A' + i; ch++) { // Inner loop for columns
            printf("%c ", ch);
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
