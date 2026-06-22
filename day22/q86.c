Here is the C program to count the number of words in a sentence.

C
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    int words = 0;
    int inWord = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
        i++;
    }

    printf("Total words: %d\n", words);

    return 0;
}