#include <stdio.h>

int main() {
    int arr1[4] = {1, 5, 10, 20};
    int size1 = 4;

    int arr2[4] = {6, 5, 20, 30};
    int size2 = 4;

    int arr3[4] = {5, 13, 15, 20};
    int size3 = 4;

    for (int i = 0; i < size1; i++) {
        int found_in_arr2 = 0;
        int found_in_arr3 = 0;

        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                found_in_arr2 = 1;
                break;
            }
        }

        for (int k = 0; k < size3; k++) {
            if (arr1[i] == arr3[k]) {
                found_in_arr3 = 1;
                break;
            }
        }

        if (found_in_arr2 == 1 && found_in_arr3 == 1) {
            printf("%d ", arr1[i]);
        }
    }

    return 0;
}