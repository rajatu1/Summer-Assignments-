#include <stdio.h>

int main() {
    int arr[7] = {2, 3, 2, 5, 3, 6, 2};
    int size = 7;
    int temp[7];
    int temp_size = 0;

    for (int i = 0; i < size; i++) {
        int is_duplicate = 0;

        for (int j = 0; j < temp_size; j++) {
            if (arr[i] == temp[j]) {
                is_duplicate = 1;
                break;
            }
        }

        if (is_duplicate == 0) {
            temp[temp_size] = arr[i];
            temp_size++;
        }
    }

    for (int i = 0; i < temp_size; i++) {
        arr[i] = temp[i];
    }
    size = temp_size;

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}