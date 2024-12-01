#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;  // Number of elements
    int *arr;  // Pointer to store elements
    int largest;  // To store the largest element

    // Get the number of elements
    printf("Enter the number of elements (1-100): ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));

    // Input elements from the user
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the largest
    largest = arr[0];

    // Find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output the largest number
    printf("The largest number is: %d\n", largest);

    // Free the allocated memory
    free(arr);

    return 0;
}
