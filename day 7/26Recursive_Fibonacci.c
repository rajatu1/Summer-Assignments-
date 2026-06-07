#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int term;
    int result;

    printf("Enter the term number: ");
    scanf("%d", &term);

    if (term < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        result = fibonacci(term);
        printf("The Fibonacci number at term %d is %d\n", term, result);
    }

    return 0;
}