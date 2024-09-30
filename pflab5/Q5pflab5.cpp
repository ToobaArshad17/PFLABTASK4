#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num & 1) {
        printf("%d is Odd",num);
    } else {
        printf("%d is Even",num);
    }

    return 0;
}
