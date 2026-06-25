#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLongestWord(char *sentence, char *longest) {
    int maxLen = 0;
    int currentLen = 0;
    int startIdx = 0;
    int longestStartIdx = 0;
    int i = 0;

    while (sentence[i] != '\0') {
        if (!isspace(sentence[i])) {
            if (currentLen == 0) {
                startIdx = i;
            }
            currentLen++;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                longestStartIdx = startIdx;
            }
            currentLen = 0;
        }
        i++;
    }

    if (currentLen > maxLen) {
        maxLen = currentLen;
        longestStartIdx = startIdx;
    }

    strncpy(longest, &sentence[longestStartIdx], maxLen);
    longest[maxLen] = '\0';
}

int main() {
    char sentence[200];
    char longest[100] = "";

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    findLongestWord(sentence, longest);

    printf("The longest word is: %s\n", longest);

    return 0;
}