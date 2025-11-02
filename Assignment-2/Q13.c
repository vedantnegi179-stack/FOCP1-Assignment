#include <stdio.h>

int findPeak(int arr[], int n) {
    // Handle edge cases
    if (n == 1) return arr[0];
    if (arr[0] >= arr[1]) return arr[0];
    if (arr[n - 1] >= arr[n - 2]) return arr[n - 1];

    // Check for peak in middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
            return arr[i];
    }

    return -1; // if no peak found (theoretically unlikely)
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findPeak(arr, n);
    if (peak != -1)
        printf("A peak element is %d\n", peak);
    else
        printf("No peak element found\n");

    return 0;
}
