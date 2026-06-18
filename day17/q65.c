#include <stdio.h>

int main() {
    int arr1[3] = {1, 3, 5};
    int size1 = 3;
    
    int arr2[4] = {2, 4, 6, 8};
    int size2 = 4;
    
    int merged[7];
    int merged_size = size1 + size2;

    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    for (int i = 0; i < merged_size; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}