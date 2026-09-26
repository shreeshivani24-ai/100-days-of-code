//Day 20 - Q2
//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    long long n, result = 0, place = 1, digit;

    printf("Enter binary number: ");
    scanf("%lld", &n);

    while(n > 0) {
        digit = n % 10;
        digit = 1 - digit;

        result = result + digit * place;
        place *= 10;
        n /= 10;
    }

    printf("1's complement = %lld\n", result);

    return 0;
}