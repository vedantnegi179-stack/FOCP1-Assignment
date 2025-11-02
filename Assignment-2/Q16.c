#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void insertAtPosition(int arr[], int *n, int element, int position) {
    if (position < 0 || position > *n) {
        printf("Invalid position.\n");
        return;
    }

    // Shift elements to the right to create space
    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[position] = element;
    (*n)++;
}

int main() {
    int n, element, choice, pos;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Original array: ");
    printArray(arr, n);

    printf("Insert at:\n1. Front\n2. Middle\n3. End\nEnter choice: ");
    scanf("%d", &choice);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    switch (choice) {
        case 1: // Front (position 0)
            pos = 0;
            break;
        case 2: // Middle (floor of n/2)
            pos = n / 2;
            break;
        case 3: // End (position n)
            pos = n;
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    insertAtPosition(arr, &n, element, pos);

    printf("Array after insertion: ");
    printArray(arr, n);

    return 0;
}
