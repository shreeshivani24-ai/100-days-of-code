//Day 21 - Q1
//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int n, first, last, digits = 1, power = 1, middle, result;

    printf("Enter number: ");
    scanf("%d", &n);

    last = n % 10;

    while(n >= 10) {
        n /= 10;
        digits++;
        power *= 10;
    }

    first = n;

    if(digits == 1) {
        printf("After swapping = %d\n", first);
        return 0;
    }

    middle = (n % power) / 10;
    result = last * power + middle * 10 + first;

    printf("After swapping = %d\n", result);

    return 0;
}