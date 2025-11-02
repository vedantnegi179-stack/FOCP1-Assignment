#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];
    printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    printf("Students who scored 99 are at positions: ");
    for (i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("%d ", i + 1);  // Printing position (1-based)
            count++;
        }
    }

    if (count == 0) {
        printf("None\n");
    } else {
        printf("\nTotal students scoring 99: %d\n", count);
    }

    return 0;
}
