#include <stdio.h>
#include <string.h>

void sortWordsByLength(char words[][50], int n) {
    char temp[50];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;

    printf("How many words do you want to enter? ");
    scanf("%d", &n);

    char words[n][50];

    for (int i = 0; i < n; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]);
    }

    sortWordsByLength(words, n);

    printf("\nWords sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s (Length: %lu)\n", words[i], strlen(words[i]));
    }

    return 0;
}