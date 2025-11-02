#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0; // Not prime

    if (num == 2)
        return 1; // 2 is prime

    if (num % 2 == 0)
        return 0; // Even numbers greater than 2 are not prime

    int limit = (int)sqrt(num);
    for (int i = 3; i <= limit; i += 2) {
        if (num % i == 0)
            return 0; // Divisible by i, not prime
    }
    return 1; // Prime
}

int main() {
    int n, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }

    printf("Number of prime numbers in the array: %d\n", count);
    return 0;
}
