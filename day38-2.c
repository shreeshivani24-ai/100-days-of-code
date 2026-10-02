// Day 38 - Q2
//Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[100][100];
    int symmetric = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}