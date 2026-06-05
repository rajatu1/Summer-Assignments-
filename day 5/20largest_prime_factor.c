#include <stdio.h>

int main() {
    int num, maxPrime = -1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num % 2 == 0) {
        maxPrime = 2;
        num = num / 2;
    }

    for (int i = 3; i * i <= num; i = i + 2) {
        while (num % i == 0) {
            maxPrime = i;
            num = num / i;
        }
    }

    if (num > 2) {
        maxPrime = num;
    }

    printf("The largest prime factor is: %d\n", maxPrime);

    return 0;
}