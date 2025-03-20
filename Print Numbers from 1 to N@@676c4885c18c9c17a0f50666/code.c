#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input number

    for (int i = 1; i <= n; i++) { // Loop from 1 to n (including n)
        printf("%d", i);
        if (i == n) { // Print space only if it's not the last number
            printf(" ");
        }
    }

    return 0;
}
