#include <stdio.h>

int isPrime(int num, int i) {
    if (num <= 2) 
        return (num == 2) ? 1 : 0;
    if (num % i == 0) 
        return 0;
    if (i * i > num) 
        return 1;
    return isPrime(num, i + 1);
}

int main() {
    int number = 29; // Change this number to check others
    if (isPrime(number, 2))
        printf("%d is a prime number\n", number);
    else
        printf("%d is not a prime number\n", number);

    return 0;
}

