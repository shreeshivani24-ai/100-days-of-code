// Day 40 - Q1
//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main()
 {
    int rows, cols, i, j;
    int matrix[100][100];

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows + cols - 1; i++) {

        for (j = 0; j < cols; j++) {
            int row = i - j;

            if (row >= 0 && row < rows) {
                printf("%d ", matrix[row][j]);
            }
        }
    }

    return 0;
}