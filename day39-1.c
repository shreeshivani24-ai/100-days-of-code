// Day 39 - Q1
//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[100][100];
    int distinct = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {

            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
            }

            if (matrix[i][n - 1 - i] == matrix[j][n - 1 - j]) {
                distinct = 0;
            }
        }
    }

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}