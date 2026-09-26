//Day 19 - Q1
//Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(i = 1; ; i++) {
        if((a * i) % b == 0) {
            lcm = a * i;
            break;
        }
    }

    printf("LCM = %d\n", lcm);

    return 0;
}