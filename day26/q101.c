#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number;
    int guess;
    
    srand(time(NULL));
    secret_number = (rand() % 100) + 1;

    printf("I have chosen a number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > secret_number) {
            printf("Too high! Try again.\n");
        } else if (guess < secret_number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed it right.\n");
        }
    } while (guess != secret_number);

    return 0;
}