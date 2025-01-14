#include <stdio.h>

// Recursive function to print numbers in a line
void printNumbers(int n) {
    if (n <= 0)
        return;
    printNumbers(n - 1);
    printf("%d ", n);
}

// Recursive function to print the pattern
void printPattern(int n, int current) {
    if (current > n)
        return;
    printNumbers(current);
    printf("\n");
    printPattern(n, current + 1);
}

int main() {
    int n = 4; // Example value
    printPattern(n, 1);
    return 0;
}

