Here is the C program to find the first repeating character in a string.

C
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int frequency[256] = {0};
    int i;
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (frequency[(unsigned char)str[i]] == 1) {
            printf("The first repeating character is: '%c'\n", str[i]);
            found = 1;
            break;
        }
        frequency[(unsigned char)str[i]]++;
    }

    if (!found) {
        printf("No repeating characters found.\n");
    }

    return 0;
}