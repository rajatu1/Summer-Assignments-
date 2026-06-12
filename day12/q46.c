#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num;
    int temp = num;
    int digits = 0;
    int sum = 0;
    int remainder;

    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    while (num > 0) {
        remainder = num % 10;
        sum = sum + pow(remainder, digits);
        num = num / 10;
    }

    if (sum == original) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}