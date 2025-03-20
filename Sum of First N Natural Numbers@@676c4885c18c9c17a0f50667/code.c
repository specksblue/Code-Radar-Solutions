#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n); // Input number

    for (int i = 1; i <= n; i++) {
        sum += i; // Adding numbers from 1 to n
    }

    printf("%d\n", sum); // Print the result

    return 0;
}
