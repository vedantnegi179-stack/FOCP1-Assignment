#include <stdio.h>

int hcf_iterative(int a, int b) {
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main() {
    int num1, num2, hcf;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    hcf = hcf_iterative(num1, num2);

    printf("HCF of %d and %d is %d\n", num1, num2, hcf);
    return 0;
}
