#include <stdio.h>

int main() {
    float cost, discount, discountedamount, amountsaved;

    printf("Enter the total cost of the items: ");
    scanf("%f", &cost);

    if (cost < 1500) {
        discount = 0.07; 
    } else if (cost >= 1500 && cost <= 3000) {
        discount = 0.12; 
    } else if (cost > 3000 && cost <= 5000) {
        discount = 0.22; 
    } else {
        discount = 0.30; 
    }

    amountsaved = cost * discount;
    discountedamount = cost - amountsaved;

    printf("Original Amount: %.2f\n", cost);
    printf("Discount Applied: %.2f%%\n", discount * 100);
    printf("Amount Saved: %.2f\n", amountsaved);
    printf("Final Amount After Discount: %.2f\n", discountedamount);

    return 0;
}
