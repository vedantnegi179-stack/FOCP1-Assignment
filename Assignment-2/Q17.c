#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void deleteAtPosition(int arr[], int *n, int position) {
    if (position < 0 || position >= *n) {
        printf("Invalid position.\n");
        return;
    }

    // Shift elements left to overwrite the deleted element
    for (int i = position; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;  // Reduce array size by one
}

int main() {
    int n, choice, pos;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Original array: ");
    printArray(arr, n);

    printf("Delete from:\n1. Front\n2. Middle\n3. End\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Front (position 0)
            pos = 0;
            break;
        case 2: // Middle (floor of n/2)
            pos = n / 2;
            break;
        case 3: // End (position n-1)
            pos = n - 1;
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    deleteAtPosition(arr, &n, pos);

    printf("Array after deletion: ");
    printArray(arr, n);

    return 0;
}
