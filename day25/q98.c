#include <stdio.h>
#include <string.h>

void findCommonCharacters(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    char alreadyPrinted[256] = {0}; 

    printf("Common characters: ");
    
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (str1[i] == str2[j]) {
                
                int asciiValue = (unsigned char)str1[i];
                if (alreadyPrinted[asciiValue] == 0) {
                    printf("%c ", str1[i]);
                    alreadyPrinted[asciiValue] = 1; 
                }
                break; 
            }
        }
    }
    printf("\n");
}

int main() {
    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    int len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') str1[len1 - 1] = '\0';

    int len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') str2[len2 - 1] = '\0';

    findCommonCharacters(str1, str2);

    return 0;
}