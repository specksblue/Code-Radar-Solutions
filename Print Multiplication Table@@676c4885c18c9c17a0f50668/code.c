#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) { // Loop for numbers 1 to 10
        for (int j = 1; j <= 10; j++) { // Loop for multiplication from 1 to 10
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Newline after each table
    }
    
    return 0;
}
