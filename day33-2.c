//Day33 - Q2
//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, i, value, position;
    int arr[101];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &value);

    position = n;

    for (i = 0; i < n; i++) {
        if (arr[i] >= value) {
            position = i;
            break;
        }
    }

    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;

    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}