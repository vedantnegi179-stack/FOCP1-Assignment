#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of scores: ");
    scanf("%d", &n);

    int scores[n];
    int even_array[n], odd_array[n];
    int even_count = 0, odd_count = 0;

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Traverse and separate even and odd scores
    for (i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even_array[even_count++] = scores[i];
        } else {
            odd_array[odd_count++] = scores[i];
        }
    }

    // Print even scores
    printf("Even scores (%d): ", even_count);
    for (i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }
    printf("\n");

    // Print odd scores
    printf("Odd scores (%d): ", odd_count);
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }
    printf("\n");

    return 0;
}
