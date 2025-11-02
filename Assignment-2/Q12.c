#include <stdio.h>

int main() {
    int n, i, max, min;

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    int scores[n];
    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    max = scores[0];
    min = scores[0];

    // Compare to find max and min
    for (i = 1; i < n; i++) {
        if (scores[i] > max)
            max = scores[i];
        if (scores[i] < min)
            min = scores[i];
    }

    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);

    return 0;
}
