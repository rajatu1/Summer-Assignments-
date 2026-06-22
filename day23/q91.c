Here is the C program to check if two strings are anagrams.

C
#include <stdio.h>
#include <string.h>

int main() {
    char str1[200];
    char str2[200];
    int count[256] = {0};
    int i = 0;
    int isAnagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (strlen(str1) != strlen(str2)) {
        isAnagram = 0;
    } else {
        while (str1[i] != '\0') {
            count[(unsigned char)str1[i]]++;
            count[(unsigned char)str2[i]]--;
            i++;
        }

        for (i = 0; i < 256; i++) {
            if (count[i] != 0) {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}