#include <stdio.h>


int binomialCoeff(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}


void printPascal(int n) {
    int line, i;

    for (line = 0; line < n; line++) {
        for (i = 0; i <= line; i++) {
            printf("%d ", binomialCoeff(line, i));
        }
        printf("\n");
    }
}

int main() {
    int n = 5; 
    printPascal(n);
    return 0;
}

