Here is the C program to find the maximum occurring character in a string.

C
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int frequency[256] = {0};
    int i = 0;
    int max = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        frequency[(unsigned char)str[i]]++;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (frequency[i] > max) {
            max = frequency[i];
            maxChar = (char)i;
        }
    }

    if (max > 0) {
        printf("The maximum occurring character is '%c' (occurs %d times).\n", maxChar, max);
    } else {
        printf("The string is empty.\n");
    }

    return 0;
}