#include <stdio.h>


void checkPerfectNumber(int num) {
    int sum = 0;
    int i;

    printf("Divisors of %d are: ", num);
    
   
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("%d ", i);  
            sum += i;  
        }
    }
    
   
    printf("\nSum of divisors = %d\n", sum);
    
    
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
}

int main() {
    int num = 25;  
    checkPerfectNumber(num);
    return 0;
}

