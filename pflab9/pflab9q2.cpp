#include <stdio.h>

int main() {
    int bolts, nuts, washers;
    int totalCost;
    
    // Prices
    int boltPrice = 5;
    int nutPrice = 3;
    int washerPrice = 1;

    // Ask the user for the number of bolts, nuts, and washers
    printf("Number of bolts: ");
    scanf("%d", &bolts);

    printf("Number of nuts: ");
    scanf("%d", &nuts);

    printf("Number of washers: ");
    scanf("%d", &washers);

    // Check the order
    if (nuts < bolts) {
        printf("Check the Order: too few nuts\n");
    }
    if (washers < 2 * bolts) {
        printf("Check the Order: too few washers\n");
    }
    if (nuts >= bolts && washers >= 2 * bolts) {
        printf("Order is OK.\n");
    }

    // Calculate the total cost
    totalCost = (bolts * boltPrice) + (nuts * nutPrice) + (washers * washerPrice);
    printf("Total cost: %d\n", totalCost);

    return 0;
}
