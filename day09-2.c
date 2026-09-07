//Day 9 - Q2
//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
#include <stdio.h>

int main() 
{
    float percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if(percentage >= 90)
        printf("Grade A\n");
    else if(percentage >= 80)
        printf("Grade B\n");
    else if(percentage >= 70)
        printf("Grade C\n");
    else if(percentage >= 60)
        printf("Grade D\n");
    else
        printf("Grade F\n");

    return 0;
}