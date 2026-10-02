//Day 34 - Q2
//Delete an element from an array.
#include <stdio.h>

int main()
 {
    int n, i, position;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &position);

    for (i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}