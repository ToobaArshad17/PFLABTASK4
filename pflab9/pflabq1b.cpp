#include <stdio.h>

int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
