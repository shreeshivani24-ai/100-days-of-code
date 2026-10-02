// Day 49 - Q1
//Print the initials of a name.
#include <stdio.h>

int main() {
    char name[200];
    int i = 0;
    int newWord = 1;

    fgets(name, sizeof(name), stdin);

    while (name[i] != '\0') {

        if (name[i] != ' ' && newWord == 1) {
            printf("%c", name[i]);
            newWord = 0;
        }

        if (name[i] == ' ') {
            newWord = 1;
        }

        i++;
    }

    return 0;
}