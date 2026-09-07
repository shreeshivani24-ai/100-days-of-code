//Day 5 - Q2
//Write a program to input time in seconds and convert it into hours: minutes:seconds format.
#include <stdio.h>

int main() {
    int seconds, hours, minutes, remaining;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    remaining = seconds % 3600;
    minutes = remaining / 60;
    remaining = remaining % 60;

    printf("%02d:%02d:%02d\n", hours, minutes, remaining);

    return 0;
}