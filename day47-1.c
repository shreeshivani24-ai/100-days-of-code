// Day 47 - Q1
//Check if two strings are anagrams of each other
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0};
    int freq2[26] = {0};
    int i;
    int anagram = 1;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            freq1[str1[i] - 'a']++;
        }
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            freq2[str2[i] - 'a']++;
        }
    }

    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}