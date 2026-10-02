// Day 36 - Q2
//Find the sum of all elements in a matrix
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[100][100];
    int sum = 0;

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}