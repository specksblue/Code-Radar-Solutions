#include <stdio.h>

void printDiamond(int n) {
    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++) printf(" ");
        for (int j = 0; j < i; j++) printf("*");
        printf("\n");
    }
    for (int i = n - 2; i > 0; i -= 2) {
        for (int j = 0; j < (n - i) / 2; j++) printf(" ");
        for (int j = 0; j < i; j++) printf("*");
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n); // Input for number of rows (odd number recommended)
    printDiamond(n);
    return 0;
}
