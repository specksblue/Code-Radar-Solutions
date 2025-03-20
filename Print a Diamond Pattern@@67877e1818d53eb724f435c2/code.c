#include <stdio.h>

void printDiamond(int n) {
    int maxWidth = 2 * n - 1; // Ensures 5 lines when n=3
    for (int i = 1; i <= maxWidth; i += 2) {
        for (int j = 0; j < (maxWidth - i) / 2; j++) printf(" ");
        for (int j = 0; j < i; j++) printf("*");
        printf("\n");
    }
    for (int i = maxWidth - 2; i > 0; i -= 2) {
        for (int j = 0; j < (maxWidth - i) / 2; j++) printf(" ");
        for (int j = 0; j < i; j++) printf("*");
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n); // Input for half-diamond height
    printDiamond(n);
    return 0;
}
