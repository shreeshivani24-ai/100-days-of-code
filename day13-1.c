//Day13 - Q1
//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main()
 {
    int a, b;
    char op;

    printf("Enter expression: ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op) 
    {
        case '+':
            printf("Result = %d\n", a + b);
            break;
        case '-':
            printf("Result = %d\n", a - b);
            break;
        case '*':
            printf("Result = %d\n", a * b);
            break;
        case '/':
            printf("Result = %d\n", a / b);
            break;
        case '%':
            printf("Result = %d\n", a % b);
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}