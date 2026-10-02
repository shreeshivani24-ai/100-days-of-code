// Day 47 - Q2
//Find the longest word in a sentence
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    int start = 0, currentLength = 0;
    int longestStart = 0, longestLength = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {

        if (str[i] != ' ') {
            if (currentLength == 0) {
                start = i;
            }

            currentLength++;
        }
        else {
            if (currentLength > longestLength) {
                longestLength = currentLength;
                longestStart = start;
            }

            currentLength = 0;
        }

        i++;
    }

    if (currentLength > longestLength) {
        longestLength = currentLength;
        longestStart = start;
    }

    for (i = longestStart; i < longestStart + longestLength; i++) {
        printf("%c", str[i]);
    }

    return 0;
}