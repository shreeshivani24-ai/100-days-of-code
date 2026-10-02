//Day 31 - Q1
//Search for an element in an array using linear search.
#include <stdio.h>

int main() 
{
    int n, i, key, found = 0;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }

    if (found == 0) 
    {
        printf("-1");
    }

    return 0;
}