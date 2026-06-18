#include <stdio.h>

int main() {
    int arr[10] = {11, 12, 22, 25, 34, 45, 64, 72, 81, 90};
    int n = 10;
    int target = 25;
    
    int low = 0;
    int high = n - 1;
    int mid;
    int result = -1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;
            break;
        }
        
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}