#include <stdio.h>
#include <limits.h>

// Function to find optimal cost of binary search tree
int optimalBST(int keys[], int freq[], int n) {
    int cost[n][n], i, j, l, r, c, k;

    // Cost for a single key
    for (i = 0; i < n; i++) {
        cost[i][i] = freq[i];
    }

    // Calculate cost for chains of length l
    for (l = 2; l <= n; l++) {
        for (i = 0; i <= n - l + 1; i++) {
            j = i + l - 1;
            cost[i][j] = INT_MAX;

            // Try all keys as root
            for (k = i; k <= j; k++) {
                c = ((k > i) ? cost[i][k - 1] : 0) +
                    ((k < j) ? cost[k + 1][j] : 0) +
                    sum(freq, i, j);

                if (c < cost[i][j]) {
                    cost[i][j] = c;
                }
            }
        }
    }

    return cost[0][n - 1];
}

int sum(int freq[], int i, int j) {
    int s = 0, k;
    for (k = i; k <= j; k++)
        s += freq[k];
    return s;
}

int main() {
    int keys[] = {10, 12, 20};
    int freq[] = {34, 8, 50};
    int n = sizeof(keys) / sizeof(keys[0]);
    printf("Cost of Optimal BST is %d\n", optimalBST(keys, freq, n));
    return 0;
}

