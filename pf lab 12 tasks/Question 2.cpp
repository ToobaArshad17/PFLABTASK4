#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit if malloc fails
    }

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Modify the array (make all odd numbers even)
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {  // If the number is odd
            arr[i] -= 1;  // Decrease the odd number by 1
        }
    }

    // Display the modified array
    printf("Modified array (only even numbers):\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
