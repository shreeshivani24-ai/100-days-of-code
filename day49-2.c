// Day 49 - Q2
//Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main() {
    char name[200];
    int i = 0;
    int lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ') {
            lastSpace = i;
        }
        i++;
    }

    for (i = 0; i < lastSpace; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c.", name[i]);
        }
    }

    if (lastSpace != -1) {
        printf(" ");

        for (i = lastSpace + 1; name[i] != '\0' && name[i] != '\n'; i++) {
            printf("%c", name[i]);
        }
    }

    return 0;
}