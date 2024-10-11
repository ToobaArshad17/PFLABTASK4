#include <stdio.h>

int main() {
    int num, sum = 0;

    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);

        sum += num;
        printf("Current sum is: %d\n", sum);

    } while (num != 0);

    printf("Final sum is: %d\n", sum);
    return 0;
}