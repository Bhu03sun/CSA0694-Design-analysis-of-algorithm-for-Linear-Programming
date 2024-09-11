#include <stdio.h>

void reverseString(char *str, int len) {
    if (len < 0)
        return;
    printf("%c", str[len]);
    reverseString(str, len - 1);
}

int main() {
    char str[] = "Hello"; // Change the string if needed
    int len = 0;
    while (str[len] != '\0')
        len++;
    printf("Reversed String: ");
    reverseString(str, len - 1);
    printf("\n");
    return 0;
}

