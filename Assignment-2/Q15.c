#include <stdio.h>

void rotateClockwiseByOne(int arr[], int n) {
    if (n <= 1) return;

    int last = arr[n - 1];  // Store last element

    // Shift all elements one position to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;  // Assign last element to first position
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rotateClockwiseByOne(arr, n);

    printf("Array after cyclic clockwise rotation by one position:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
