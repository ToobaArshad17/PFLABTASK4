#include <stdio.h>

int main() {
    int n;

    printf("Enter the side length of the square (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' for border and both diagonals, otherwise print a space
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || i == j || j == n - i - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
