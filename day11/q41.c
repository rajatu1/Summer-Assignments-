#include <stdio.h>

int findSum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b, sum;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = findSum(a, b);

    printf("Sum is: %d\n", sum);

    return 0;
}