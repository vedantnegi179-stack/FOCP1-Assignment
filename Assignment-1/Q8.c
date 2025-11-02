#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;  // First two terms are 0 and 1
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d", next);
        if (i < n - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}
