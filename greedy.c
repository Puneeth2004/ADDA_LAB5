#include <stdio.h>

// Function to find the minimum number of coins needed to make change
void coinChange(int coins[], int numCoins, int amount) {
    int coinCount = 0;

    // Start from the highest denomination coin
    for (int i = 0; i <= numCoins; i++){
        // Check how many coins of the current denomination can be used
        while (amount >= coins[i]) {
            amount -= coins[i];
            coinCount++;
        }
        // If amount becomes 0, break the loop
        if (amount == 0)
            break;
    }

    // Output the result
    if (amount == 0)
        printf("Minimum number of coins required: %d\n", coinCount);
    else
        printf("It is not possible to make the exact change.\n");
}

int main() {
    int coins[] = {1, 5, 10, 25}; // Denominations of coins
    int numCoins = sizeof(coins) / sizeof(coins[0]); // Number of coins
    int amount;

    printf("Enter the amount for which you want to make change: ");
    scanf("%d", &amount);

    coinChange(coins, numCoins, amount);

    return 0;
}

