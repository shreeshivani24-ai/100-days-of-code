// Day 48 - Q2
//Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    int start = 0;

    fgets(str, sizeof(str), stdin);

    while (1) {

        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {

            int j;

            for (j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }

            if (str[i] == ' ') {
                printf(" ");
            }

            start = i + 1;
        }

        if (str[i] == '\0' || str[i] == '\n') {
            break;
        }

        i++;
    }

    return 0;
}