Here is a beginner-friendly C program to move all zeroes in an array to the end while keeping the order of the other numbers.

C
#include <stdio.h>

int main() {
    int arr[7] = {1, 0, 3, 0, 0, 5, 2};
    int size = 7;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    while (count < size) {
        arr[count] = 0;
        count++;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}