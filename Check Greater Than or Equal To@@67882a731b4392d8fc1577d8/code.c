#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b); // Read two integers

    if (a >= b) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
