#include <stdio.h>

int main() {
    int n, i, j, found_duplicates = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], visited[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Mark all as unvisited initially
    }

    for (i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue; // Already counted this element

        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1; // Mark duplicates as visited
                count++;
            }
        }

        if (count > 1) {
            printf("%d ", arr[i]);
            found_duplicates = 1;
        }
    }

    if (!found_duplicates)
        printf("-1");

    printf("\n");

    return 0;
}
