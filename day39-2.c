// Day 39 - Q2
//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() 
{
    int n, i, j;
    int matrix[100][100];
    int sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum = sum + matrix[i][i];
    }

    printf("%d", sum);

    return 0;
}