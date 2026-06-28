#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice, length, cmp;

    while (1) {
        printf("\n--- String Operations Menu ---\n");
        printf("1. Find Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        getchar();

        if (choice == 5) {
            printf("Exiting system.\n");
            exit(0);
        }

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                
                length = strlen(str1);
                printf("Length of the string: %d\n", length);
                break;

            case 2:
                printf("Enter source string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                
                strcpy(str2, str1);
                printf("Copied string (Destination): %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                
                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                
                cmp = strcmp(str1, str2);
                if (cmp == 0) {
                    printf("Strings are equal.\n");
                } else if (cmp > 0) {
                    printf("First string is greater than second string.\n");
                } else {
                    printf("First string is smaller than second string.\n");
                }
                break;

            default:
                printf("Invalid choice! Please select between 1 and 5.\n");
        }
    }

    return 0;
}