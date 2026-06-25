#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    int len = strlen(str);
    int index = 0;

    for (int i = 0; i < len; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                break;
            }
        }
        
        if (j == i) {
            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    removeDuplicates(str);

    printf("String after removing duplicates: %s\n", str);

    return 0;
}