#include <stdio.h>

int main() {
    int num, remainder, product = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

        if (num == 0) {
        product = 0;
    }

        while (num != 0) {
        remainder = num % 10;    
        product = product * remainder; 
        num = num / 10;          
    }

    printf("Product of digits = %d\n", product);

    return 0;
}