#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        return 0; 
    }

    char temp[2 * len1 + 1]; 

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2) != NULL) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (isRotation(str1, str2)) {
        printf("Yes! '%s' is a rotation of '%s'.\n", str2, str1);
    } else {
        printf("No! '%s' is NOT a rotation of '%s'.\n", str2, str1);
    }

    return 0;
}