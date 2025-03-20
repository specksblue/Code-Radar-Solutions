#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input for diamond height (must be an odd number)

    int spaces = n / 2;
    int stars = 1;

    // Upper half
    for (int i = 1; i <= (n / 2) + 1; i++) {
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
        spaces--;
        stars += 2;
    }

    // Lower half
    spaces = 1;
    stars = n - 2;
    for (int i = 1; i <= n / 2; i++) {
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
        spaces++;
        stars -= 2;
    }

    return 0;
}

