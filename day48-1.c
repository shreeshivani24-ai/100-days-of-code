// Day 48 - Q1
//Check if one string is a rotation of another string.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int len1 = 0, len2 = 0;
    int i, j, found = 0;

    scanf("%s", str1);
    scanf("%s", str2);

    while (str1[len1] != '\0') {
        len1++;
    }

    while (str2[len2] != '\0') {
        len2++;
    }

    if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }

    for (i = 0; i < len1; i++) {

        found = 1;

        for (j = 0; j < len1; j++) {
            if (str1[(i + j) % len1] != str2[j]) {
                found = 0;
                break;
            }
        }

        if (found) {
            break;
        }
    }

    if (found)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}