#include <stdio.h>

int main() {
    int hour;
    
    printf("Enter the current hour between 0 and 23: ");
    scanf("%d", &hour);

    if (hour < 0 || hour > 23) {
        printf("Invalid input. Please enter a value between 0 and 23\n");
    } else {
        if (hour >= 6 && hour < 12) {
            printf("Good Morning\n");
        } else if (hour >= 12 && hour < 18) {
            printf("Good Afternoon\n");
        } else if (hour >= 18 && hour < 24) {
            printf("Good Evening\n");
        } else {
            printf("Good Night\n");
        }
    }

    return 0;
}
