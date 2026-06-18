#include <stdio.h>

int main() {
    int arr1[4] = {1, 2, 3, 4};
    int size1 = 4;

    int arr2[4] = {3, 4, 5, 6};
    int size2 = 4;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}