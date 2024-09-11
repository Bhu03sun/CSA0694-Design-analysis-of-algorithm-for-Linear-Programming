#include <stdio.h>

// Recursive function to print the pattern
void printPattern(int n, int i) {
    if (i > n)
        return;
    int j;
    for (j = 1; j <= i; j++)
        printf("%d ", j);
    printf("\n");
    printPattern(n, i + 1);
}

int main() {
    int n = 4; // Example n value
    printPattern(n, 1);
    return 0;
}

