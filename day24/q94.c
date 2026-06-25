#include <stdio.h>
#include <string.h>

void compressString(char *str) {
    int len = strlen(str);
    if (len == 0) return;

    for (int i = 0; i < len; i++) {
        int count = 1;
        
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Compressed string: ");
    compressString(str);

    return 0;
}