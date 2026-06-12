#include <stdio.h>

long long findFactorial(int num) {
    long long fact = 1;
    
    if (num < 0) {
        return 0;
    }
    
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    
    return fact;
}

int main() {
    int number;
    long long result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = findFactorial(number);

    if (number < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        printf("Factorial of %d is: %lld\n", number, result);
    }

    return 0;
}