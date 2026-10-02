// Day 37 - Q1
//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[100][100];
    int sum[100];

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        sum[i] = 0;

        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum[i] = sum[i] + matrix[i][j];
        }
    }

    for (i = 0; i < rows; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}