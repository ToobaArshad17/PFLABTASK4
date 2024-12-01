#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity = 4;  // Initial capacity of the array
    int size = 0;      // Current number of elements
    float *arr = (float *)malloc(capacity * sizeof(float));  // Allocate memory for the array

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int choice;
    float num;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add a number\n");
        printf("2. Display array\n");
        printf("3. Remove last number\n");
        printf("4. Shrink memory\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:  // Add a number
                if (size == capacity) {
                    // Double the capacity if array is full
                    capacity *= 2;
                    arr = (float *)realloc(arr, capacity * sizeof(float));
                    if (arr == NULL) {
                        printf("Memory reallocation failed!\n");
                        return 1;
                    }
                }
                printf("Enter a number: ");
                scanf("%f", &num);
                arr[size++] = num;  // Add the number and increase size
                break;

            case 2:  // Display array
                if (size == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array elements: ");
                    for (int i = 0; i < size; i++) {
                        printf("%.2f ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:  // Remove last number
                if (size > 0) {
                    size--;  // Decrease the size of the array
                } else {
                    printf("Array is already empty.\n");
                }
                break;

            case 4:  // Shrink memory
                if (size < capacity / 2) {
                    capacity = size;  // Shrink capacity to current size
                    arr = (float *)realloc(arr, capacity * sizeof(float));
                    if (arr == NULL && size > 0) {
                        printf("Memory reallocation failed!\n");
                        return 1;
                    }
                }
                break;

            case 5:  // Exit
                free(arr);  // Free the memory before exiting
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
