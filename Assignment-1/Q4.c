#include <stdio.h>

// Method 1: Using a temporary variable
void swap_temp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Method 2: Using arithmetic operations (without temp variable)
void swap_arithmetic(int *a, int *b) {
    *a = *a + *b;  // a now holds sum of a and b
    *b = *a - *b;  // b becomes original a
    *a = *a - *b;  // a becomes original b
}

// Method 3: Using bitwise XOR operator
void swap_xor(int *a, int *b) {
    if (a != b) { // Check to avoid zeroing when same address
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

// Method 4: Using pointer manipulation (swap through pointers)
void swap_pointer(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
    // Note: This swaps local pointer copies, not the values outside the function
}

int main() {
    int x, y;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("\nOriginal values: x = %d, y = %d\n", x, y);

    // Swap using temporary variable
    swap_temp(&x, &y);
    printf("After swap_temp: x = %d, y = %d\n", x, y);

    // Swap back using arithmetic
    swap_arithmetic(&x, &y);
    printf("After swap_arithmetic: x = %d, y = %d\n", x, y);

    // Swap using XOR
    swap_xor(&x, &y);
    printf("After swap_xor: x = %d, y = %d\n", x, y);

    // Swap pointer addresses (this won't swap values outside the function)
    swap_pointer(&x, &y);
    printf("After swap_pointer (values unchanged): x = %d, y = %d\n", x, y);

    return 0;
}
