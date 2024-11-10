#include <stdio.h>

int main() {
    int n, i, j, space;

    // Input number of rows
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);

    // Upper part of the sandglass
    for (i = n; i >= 1; i--) {
        // Print leading spaces
        for (space = 0; space < n - i; space++) {
            printf(" ");
        }
        
        // Print numbers in descending order
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Lower part of the sandglass
    for (i = 2; i <= n; i++) {
        // Print leading spaces
        for (space = 0; space < n - i; space++) {
            printf(" ");
        }

        // Print numbers in descending order
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
