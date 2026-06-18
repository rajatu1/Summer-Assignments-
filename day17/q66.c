#include <stdio.h>

int main() {
    int arr1[4] = {1, 2, 3, 4};
    int size1 = 4;

    int arr2[4] = {3, 4, 5, 6};
    int size2 = 4;

    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }

    for (int i = 0; i < size2; i++) {
        int is_duplicate = 0;

        for (int j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                is_duplicate = 1;
                break;
            }
        }

        if (is_duplicate == 0) {
            printf("%d ", arr2[i]);
        }
    }

    return 0;
}