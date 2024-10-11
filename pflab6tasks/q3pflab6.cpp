#include <stdio.h>
int main() {
    int num;

    do {
        printf("Enter num: ");
        scanf("%d", &num);

        if (num <= 0) {
            printf("no\n");
        }
    } while (num <= 0); 
    
    printf("Hell yeah ~<_%d_>~\n", num);

    return 0;
}










