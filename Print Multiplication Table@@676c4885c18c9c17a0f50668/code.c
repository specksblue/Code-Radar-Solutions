#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input number

    for (int i = 1; i <= 10; i++) { // Loop for multiplication from 1 to 10
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
