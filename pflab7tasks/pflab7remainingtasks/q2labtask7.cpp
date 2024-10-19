#include <stdio.h>

int main() {
    int arr[10], i, temp;

    printf("Enter 10 numbers: \n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    temp = arr[0];

    for(i = 0; i < 9; i++) {
        arr[i] = arr[i + 1];
    }

    arr[9] = temp;

    printf("Array after shifting left: \n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
