#include <stdio.h>
int main(){
    int n;

    printf("Enter an integer greater than or equal to 1:");
    scanf("%d",&n);

    while (n<1){
        printf("Enter a valid number greater than or equal to 1:");
        scanf("%d",&n);
    }

    int i=2;
    printf("Even numbers from 1 to %d are: \n",n);
    while(i<=n){
        printf("%d\n",i);
        i += 2;
    }

    return 0;
}
