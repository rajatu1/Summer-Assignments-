#include <stdio.h>

int findMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a, b, max;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    max = findMax(a, b);

    printf("Maximum number is: %d\n", max);

    return 0;
}