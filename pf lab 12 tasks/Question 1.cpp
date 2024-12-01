#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_students;  // To store the number of students

    // Ask user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Dynamically allocate memory for an array of pointers for students
    int **grades = (int **)malloc(num_students * sizeof(int *));
    
    if (grades == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Loop for each student
    for (int i = 0; i < num_students; i++) {
        int num_grades;  // Number of grades for the current student
        
        // Ask how many grades for the current student
        printf("Enter the number of grades for student %d: ", i + 1);
        scanf("%d", &num_grades);

        // Allocate memory for grades of the current student
        grades[i] = (int *)malloc(num_grades * sizeof(int));

        if (grades[i] == NULL) {
            printf("Memory allocation failed for student %d!\n", i + 1);
            return 1;
        }

        // Input the grades for the current student
        printf("Enter the grades for student %d:\n", i + 1);
        for (int j = 0; j < num_grades; j++) {
            printf("Grade %d: ", j + 1);
            scanf("%d", &grades[i][j]);
        }
    }

    // Display the grades for all students
    printf("\nGrades entered:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Student %d's grades: ", i + 1);
        // Print grades for the current student
        for (int j = 0; grades[i][j]; j++) {
            printf("%d ", grades[i][j]);
        }
        printf("\n");
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < num_students; i++) {
        free(grades[i]);  // Free each student's grades
    }
    free(grades);  // Free the main array

    return 0;
}
