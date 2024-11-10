#include <stdio.h>

int main() {
    int matrix[4][4];

    // Input the 4x4 matrix from the user
    printf("Enter the elements of the 4x4 matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sort each column in ascending order
    for (int col = 0; col < 4; col++) {
        for (int i = 0; i < 3; i++) {            // Outer loop runs for each element in the column except the last
            for (int j = i + 1; j < 4; j++) {    // Inner loop compares and sorts elements below the current element
                if (matrix[i][col] > matrix[j][col]) {
                    int temp = matrix[i][col];
                    matrix[i][col] = matrix[j][col];
                    matrix[j][col] = temp;
                }
            }
        }
    }

    // Display the sorted matrix
    printf("\nMatrix after sorting each column in ascending order:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
