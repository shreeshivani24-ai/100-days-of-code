// Day 37 - Q2
//Find the transpose of a matrix
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[100][100];

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (j = 0; j < cols; j++) {
        for (i = 0; i < rows; i++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}