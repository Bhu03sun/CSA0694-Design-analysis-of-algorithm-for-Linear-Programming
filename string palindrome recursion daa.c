#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    if (start >= end)
        return 1;
    if (str[start] != str[end])
        return 0;
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[] = "madam"; // Change the string if needed
    int len = strlen(str);
    if (isPalindrome(str, 0, len - 1))
        printf("%s is a Palindrome\n", str);
    else
        printf("%s is not a Palindrome\n", str);
    return 0;
}

