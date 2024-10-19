#include <stdio.h>

int main() {
    int arr[12], sumArr[6], i;

    printf("Enter 12 numbers: \n");
    for(i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 6; i++) {
        sumArr[i] = arr[2 * i] + arr[2 * i + 1];
    }

    printf("Sum of pairs: \n");
    for(i = 0; i < 6; i++) {
        printf("%d ", sumArr[i]);
    }

    return 0;
}
