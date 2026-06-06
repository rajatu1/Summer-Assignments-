#include <stdio.h>

int main() {
    int binary, decimal = 0, weight = 1, rem;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    int originalBinary = binary;

    while (binary > 0) {
        rem = binary % 10;
        decimal = decimal + (rem * weight);
        weight = weight * 2;
        binary = binary / 10;
    }

    printf("Decimal of %d is: %d\n", originalBinary, decimal);

    return 0;
}