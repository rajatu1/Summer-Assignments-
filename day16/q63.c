#include <stdio.h>

int main() {
    int arr[5] = {1, 4, 3, 2, 5};
    int size = 5;
    int target_sum = 7;
    int found = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target_sum) {
                printf("%d %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (found == 0) {
        printf("No pair found");
    }

    return 0;
}