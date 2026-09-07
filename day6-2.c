//Day - 6 -Q2
//Write a progrsm to input an integer and check whether it is posotive , or negative or zero using nested if - else.
#include <stdio.h>

int main() 
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n >= 0) {
        if(n == 0)
            printf("Zero\n");
        else
            printf("Positive\n");
    }
    else {
        printf("Negative\n");
    }

    return 0;
}