#include <stdio.h>

// Function to reverse a number using recursion
int reverseNumber(int num, int rev) {
    if (num == 0)
        return rev;
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

int main() {
    int num = 12345;  // Example number
    printf("Reversed number is %d\n", reverseNumber(num, 0));
    return 0;
}

