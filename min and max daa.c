#include <stdio.h>

// Structure to store minimum and maximum
struct Pair {
    int min;
    int max;
};

// Function to find the minimum and maximum of the array using divide and conquer
struct Pair getMinMax(int arr[], int low, int high) {
    struct Pair minmax, mml, mmr;
    int mid;

    // If there is only one element
    if (low == high) {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }

    // If there are two elements
    if (high == low + 1) {
        if (arr[low] > arr[high]) {
            minmax.max = arr[low];
            minmax.min = arr[high];
        } else {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }

    // If there are more than two elements
    mid = (low + high) / 2;
    mml = getMinMax(arr, low, mid);
    mmr = getMinMax(arr, mid + 1, high);

    // Compare results of two halves
    minmax.min = (mml.min < mmr.min) ? mml.min : mmr.min;
    minmax.max = (mml.max > mmr.max) ? mml.max : mmr.max;

    return minmax;
}

int main() {
    int arr[] = {1000, 11, 445, 1, 330, 3000}; // Example elements
    int n = sizeof(arr) / sizeof(arr[0]);
    struct Pair minmax = getMinMax(arr, 0, n - 1);
    printf("Minimum element is %d\n", minmax.min);
    printf("Maximum element is %d\n", minmax.max);
    return 0;
}

