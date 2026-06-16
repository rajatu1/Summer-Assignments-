#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 4, 5, 6};
    int n = 6;
    int expected_sum = (n * (n + 1)) / 2;
    int actual_sum = 0;

    for (int i = 0; i < n - 1; i++) {
        actual_sum = actual_sum + arr[i];
    }

    int missing_number = expected_sum - actual_sum;

    printf("%d", missing_number);

    return 0;
}