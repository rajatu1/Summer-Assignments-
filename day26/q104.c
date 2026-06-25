#include <stdio.h>

int main() {
    char answer;
    int score = 0;

    printf("--- Welcome to the Quiz Application ---\n\n");

    printf("Question 1: What is the size of an int data type in C (usually)?\n");
    printf("A) 1 Byte\nB) 2 Bytes\nC) 4 Bytes\nD) 8 Bytes\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C.\n\n");
    }

    printf("Question 2: Which keyword is used to prevent any changes to a variable?\n");
    printf("A) static\nB) const\nC) volatile\nD) immutable\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is B.\n\n");
    }

    printf("Question 3: Which function is used to read a character from the console?\n");
    printf("A) printf()\nB) scanf()\nC) getch()\nD) main()\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C.\n\n");
    }

    printf("--- Quiz Game Over ---\n");
    printf("Your final score is: %d out of 3\n", score);

    return 0;
}