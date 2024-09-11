#include <stdio.h>

// Function to solve Knapsack problem using Dynamic Programming
int knapsackDP(int W, int weights[], int values[], int n) {
    int dp[n + 1][W + 1];
    int i, w;

    // Build table dp[][] in bottom-up manner
    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (weights[i - 1] <= w) {
                dp[i][w] = (values[i - 1] + dp[i - 1][w - weights[i - 1]] > dp[i - 1][w])
                           ? values[i - 1] + dp[i - 1][w - weights[i - 1]]
                           : dp[i - 1][w];
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W];
}

int main() {
    int values[] = {60, 100, 120};
    int weights[] = {10, 20, 30};
    int W = 50;  // Capacity of knapsack
    int n = sizeof(values) / sizeof(values[0]);
    printf("Maximum value in Knapsack = %d\n", knapsackDP(W, weights, values, n));
    return 0;
}

