#include <stdio.h>

// Function to add two numbers using bitwise operators
int add(int x, int y) {
    while (y != 0) {
        // Carry now contains common set bits of x and y
        int carry = x & y;

        // Sum of bits of x and y where at least one of the bits is not set
        x = x ^ y;

        // Carry is shifted by one so that adding it to x gives the required sum
        y = carry << 1;
    }
    return x;
}

// Function to subtract b from a using bitwise operations without '-'
int subtract(int a, int b) {
    // Subtract b by adding its two's complement
    return add(a, add(~b, 1));
}

int main() {
    int num1, num2, result;

    printf("Enter two integers (a and b) to compute a - b: ");
    scanf("%d %d", &num1, &num2);

    result = subtract(num1, num2);

    printf("Result of %d - %d is %d\n", num1, num2, result);

    return 0;
}
