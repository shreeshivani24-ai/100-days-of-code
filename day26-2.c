//Day 26 - Q2
//Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*

#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {

        for (int j = 1; j <= 4; j++) {
            printf("*");
        }

        printf("\n\n");
    }

    for (int i = 1; i <= 5; i++) {
        printf("*");
    }

    printf("\n\n");

    for (int i = 1; i <= 3; i++) {
        printf("*");
    }

    printf("\n\n");

    printf("*");

    return 0;
}