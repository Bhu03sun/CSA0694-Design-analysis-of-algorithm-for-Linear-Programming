#include <stdio.h>

// Recursive function to find the sum of digits
int sumOfDigits(int num) {
    if (num == 0)
        return 0;
    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int num = 12345;  // Example number
    printf("Sum of digits: %d\n", sumOfDigits(num));
    return 0;
}

