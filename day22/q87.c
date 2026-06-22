Here is the C program to count the frequency of each character in a string.

C
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int frequency[256] = {0};
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != '\n') {
            frequency[(unsigned char)str[i]]++;
        }
        i++;
    }

    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (frequency[i] != 0) {
            printf("'%c' : %d\n", i, frequency[i]);
        }
    }

    return 0;
}