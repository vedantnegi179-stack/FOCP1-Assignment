#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows for the binary pyramid: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print binary digits alternating 0 and 1 for each row
        for (int j = 1; j <= i; j++) {
            // Print 0 for odd positions, 1 for even positions
            printf("%d", (j + 1) % 2);
        }
        printf("\n");
    }

    return 0;
}
