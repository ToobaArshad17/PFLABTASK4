#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next;

    printf("Enter a number: ");
    scanf("%d", &n);
    int is_prime = 1;
    if (n <= 1)
        is_prime = 0;
    else
        for (int i = 2; i < n; i++) {
            if (n % i == 0)
                is_prime = 0;
        }

    if (is_prime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    printf("Fibonacci Series up to %d: %d, %d", n, a, b);
    next = a + b;
    while (next <= n) {
        printf(", %d", next);
        a = b;
        b = next;
        next = a + b;
    }
    printf("\n");

    return 0;
}
