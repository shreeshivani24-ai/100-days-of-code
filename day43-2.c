// Day 43 - Q2
//Check if a string is a palindrome
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;
    int palindrome = 1;

    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}