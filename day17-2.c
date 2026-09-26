//Day 17 - Q2
//Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n <= 1) {
        printf("Not a prime number\n");
        return 0;
    }

    for(i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");

    return 0;
}