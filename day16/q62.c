#include <stdio.h>

int main() {
    int arr[8] = {1, 3, 2, 3, 4, 3, 2, 1};
    int size = 8;
    int max_element = arr[0];
    int max_count = 0;

    for (int i = 0; i < size; i++) {
        int count = 0;
        
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > max_count) {
            max_count = count;
            max_element = arr[i];
        }
    }

    printf("%d", max_element);

    return 0;
}