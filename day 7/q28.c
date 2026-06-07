#include <stdio.h>

int reverseNumber(int n, int reversed) {
    if (n == 0) {
        return reversed;
    }
    return reverseNumber(n / 10, reversed * 10 + (n % 10));
}

int main() {
    int number;
    int result;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        result = -reverseNumber(-number, 0);
    } else {
        result = reverseNumber(number, 0);
    }

    printf("The reversed number is %d\n", result);

    return 0;
}