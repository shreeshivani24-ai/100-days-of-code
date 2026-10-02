// Day 46 - Q2
//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};
    int i = 0;
    int found = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;

            if (freq[str[i] - 'a'] == 2) {
                printf("%c", str[i]);
                found = 1;
                break;
            }
        }

        i++;
    }

    if (found == 0) {
        printf("-1");
    }

    return 0;
}