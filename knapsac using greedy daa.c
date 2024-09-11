#include <stdio.h>

// Function to perform knapsack using greedy strategy
void knapsackGreedy(int capacity, int weights[], int values[], int n) {
    float ratio[n];
    int i, j;
    
    // Calculate value-to-weight ratio
    for (i = 0; i < n; i++) 
        ratio[i] = (float) values[i] / weights[i];
    
    // Sort items by ratio in descending order
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                float temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;

                int tempValue = values[i];
                values[i] = values[j];
                values[j] = tempValue;

                int tempWeight = weights[i];
                weights[i] = weights[j];
                weights[j] = tempWeight;
            }
        }
    }
    
    int totalValue = 0;
    int currentWeight = 0;

    // Greedily add items to knapsack
    for (i = 0; i < n; i++) {
        if (currentWeight + weights[i] <= capacity) {
            currentWeight += weights[i];
            totalValue += values[i];
        } else {
            int remain = capacity - currentWeight;
            totalValue += (values[i] * remain) / weights[i];
            break;
        }
    }

    printf("Maximum value in Knapsack = %d\n", totalValue);
}

int main() {
    int weights[] = {10, 20, 30}; // Example weights
    int values[] = {60, 100, 120}; // Example values
    int capacity = 50; // Example capacity
    int n = sizeof(values) / sizeof(values[0]);
    knapsackGreedy(capacity, weights, values, n);
    return 0;
}

