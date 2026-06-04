#include <stdio.h>

int main() {
    int low, high, i, temp, remainder, result;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers: ");

    for (i = low + 1; i < high; i++) {
        temp = i;
        result = 0;

        while (temp != 0) {
            remainder = temp % 10;
            result += remainder * remainder * remainder;
            temp /= 10;
        }

        if (result == i) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}