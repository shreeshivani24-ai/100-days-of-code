//Day 17 - Q1
//Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int n, original, digit, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n = n / 10;
    }

    if(sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}