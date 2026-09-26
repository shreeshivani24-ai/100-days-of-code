//Day 23 - Q1
//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n;
    double sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int numerator = 2 * i;
        int denominator = 4 * i - 1;

        sum = sum + (double)numerator / denominator;
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}