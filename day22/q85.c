#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start = 0;
    int end;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}