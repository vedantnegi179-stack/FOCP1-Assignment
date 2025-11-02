#include <stdio.h>

int main() {
    int n, i, position = -1;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Linear search for the first occurrence of 99
    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            position = i;  // Store index of first occurrence
            break;
        }
    }

    if (position != -1)
        printf("First occurrence of 99 found at index %d (position %d).\n", position, position + 1);
    else
        printf("Score 99 not found in the array.\n");

    return 0;
}
