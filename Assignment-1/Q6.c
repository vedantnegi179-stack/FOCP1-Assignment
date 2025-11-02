#include <stdio.h>
#include <math.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32], i = 0;
    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    // Print binary array in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// Function to convert binary to decimal
void binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, remainder;
    long long temp = binary;

    while (temp != 0) {
        remainder = temp % 10;
        decimal += remainder * pow(2, i);
        temp = temp / 10;
        i++;
    }

    printf("Decimal: %d\n", decimal);
}

int main() {
    int choice;
    int decimal;
    long long binary;

    printf("Choose conversion:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);
            decimalToBinary(decimal);
            break;

        case 2:
            printf("Enter a binary number: ");
            scanf("%lld", &binary);
            binaryToDecimal(binary);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
